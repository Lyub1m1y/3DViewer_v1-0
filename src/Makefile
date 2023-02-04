.PHONY: all install uninstall clean dvi dist test gcov_report check

OS := $(shell uname -s)
SRC =  Model/viewer.c
SRC_FOR_TEST =  Model/viewer.c

CC = gcc -std=c11

CFLAGS	= -Wall -Werror -Wextra

TEST = Test/*.c

GCOVFLAGS = -fprofile-arcs -ftest-coverage
REPORT = GcovReport

ifeq ($(OS), Darwin)
	FLAGS_PLATFORM = -lcheck
else
	FLAGS_PLATFORM = -lcheck -lsubunit -lrt -lm -lpthread -g
endif


all: install open

install:
	@make clean
ifeq ($(OS), Darwin)
	@cd QT && qmake6 && make && make clean && rm Makefile && mv 3DViewer_v1-0.app/Contents/MacOS/3DViewer_v1-0 ../
else
	@cd QT && qmake6 && make && make clean && rm Makefile && mv 3DViewer_v1-0 ../
endif

uninstall:
	@rm -rf 3DViewer_v1-0

	
clean:
	@rm -rf *.{a,dSYM,out}
	@rm -rf **/**.o **.o
	@rm -rf $(EXECUTABLE)
	@rm -rf gcov_report
	@rm -rf .DS_Store
	@rm -rf **/.DS_Store
	@rm -rf report
	@rm -rf CPPLINT.cfg
	@rm -rf *.gcda
	@rm -rf *.gcno
	@rm -rf *.info
	@rm -rf test.out
	@rm -rf *tgz
	@rm -rf gcov_test
	@rm -rf .clang-format
	@rm -rf ../Archive_3DViewer_v1-0.*
	@rm -rf build-3DViewer_v1-0-Desktop-Release/
	@rm -rf build-3DViewer_v1-0-Desktop_x86_darwin_generic_mach_o_64bit-Debug
	@rm -rf QT/build-QT-Desktop_x86_darwin_generic_mach_o_64bit-Debug
	@rm -rf **/moc_predefs.h
	@rm -rf **/viewer
	@rm -rf ../Archive_3DViewer_v1-0/
	@rm -rf QT/3DViewer_v1-0.app
	@rm -rf **/3DViewer_v1-0.dSYM
	@rm -rf GcovReport
	@rm -rf ../.DS_Store
	@rm -rf .DS_Store
	@rm -rf **/.qmake.stash
	@rm -rf **/3DViewer_v1-0.pro.user

dvi:
	open ./dvi.html

dist: 
	rm -rf ../Archive_3DViewer_v1-0/
	mkdir ../Archive_3DViewer_v1-0/
	ls -la
	cp -r ../src ../Archive_3DViewer_v1-0
	cd ../ && tar -cvzf Archive_3DViewer_v1-0.tar.gz Archive_3DViewer_v1-0
	rm -rf ../Archive_3DViewer_v1-0/

test:
	@$(CC) $(CFLAGS) $(TEST) $(SRC_FOR_TEST) $(FLAGS_PLATFORM) -o test.out
	@./test.out

gcov_report:
	gcc $(GCOVFLAGS) $(TEST) $(SRC) $(FLAGS_PLATFORM) -o $(REPORT)
	chmod +x *
	./GcovReport
	lcov -t "$(REPORT)" -o $(REPORT).info -c -d .
	genhtml -o report $(REPORT).info
	rm -rf ./*.gcno ./*.gcda ./$(REPORT).*
	open ./report/index.html
	rm $(REPORT)
	rm -rf *.dSYM

open:
	./3DViewer_v1-0

check: 
	@echo -------------------STYLE_TEST-------------------
	clang-format -style=Google -n **/*.c
