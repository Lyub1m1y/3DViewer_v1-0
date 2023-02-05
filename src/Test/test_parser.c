#include <check.h>

#include "../Model/viewer.h"

// change USERNAME
#define PATH "/Users/USERNAME/Desktop/3DViewer_v1-0/src/objects/"

START_TEST(test_parser_1) {
  data_t data = {0, 0, 0, NULL, NULL};
  char fileName[512] = PATH;
  strncat(fileName, "cube.obj", 50);
  int status = parser(&data, fileName);
  int result = 0;
  result = data.countE + data.countP + data.countV;
  free(data.arrEdges);
  free(data.arrVertexes);
  ck_assert_int_eq(result, 48);
  ck_assert_int_eq(status, OK);
}
END_TEST

START_TEST(test_parser_2) {
  data_t data;
  char fileName[512] = PATH;
  strncat(fileName, "NO.obj", 50);
  int status = parser(&data, fileName);
  ck_assert_int_eq(status, FAIL);
}
END_TEST

START_TEST(test_parser_3) {
  data_t data = {0, 0, 0, NULL, NULL};
  char fileName[512] = PATH;
  strncat(fileName, "ball.obj", 50);
  int status = parser(&data, fileName);
  int result = 0;
  result = data.countE + data.countP + data.countV;
  free(data.arrEdges);
  free(data.arrVertexes);
  ck_assert_int_eq(result, 56387);
  ck_assert_int_eq(status, OK);
}
END_TEST

START_TEST(test_parser_4) {
  data_t data = {0, 0, 0, NULL, NULL};
  char fileName[512] = PATH;
  strncat(fileName, "car.obj", 50);
  int status = parser(&data, fileName);
  int result = 0;
  result = data.countE + data.countP + data.countV;
  free(data.arrEdges);
  free(data.arrVertexes);
  ck_assert_int_eq(result, 8151);
  ck_assert_int_eq(status, OK);
}
END_TEST

START_TEST(test_parser_5) {
  data_t data = {0, 0, 0, NULL, NULL};
  char fileName[512] = PATH;
  strncat(fileName, "cat.obj", 50);
  int status = parser(&data, fileName);
  int result = 0;
  result = data.countE + data.countP + data.countV;
  free(data.arrEdges);
  free(data.arrVertexes);
  ck_assert_int_eq(result, 9464);
  ck_assert_int_eq(status, OK);
}
END_TEST

START_TEST(test_parser_6) {
  data_t data = {0, 0, 0, NULL, NULL};
  char fileName[512] = PATH;
  strncat(fileName, "Gun.obj", 50);
  int status = parser(&data, fileName);
  int result = 0;
  result = data.countE + data.countP + data.countV;
  free(data.arrEdges);
  free(data.arrVertexes);
  ck_assert_int_eq(result, 67742);
  ck_assert_int_eq(status, OK);
}
END_TEST

START_TEST(test_parser_7) {
  data_t data = {0, 0, 0, NULL, NULL};
  char fileName[512] = PATH;
  strncat(fileName, "hand.obj", 50);
  int status = parser(&data, fileName);
  int result = 0;
  result = data.countE + data.countP + data.countV;
  free(data.arrEdges);
  free(data.arrVertexes);
  ck_assert_int_eq(result, 26426);
  ck_assert_int_eq(status, OK);
}
END_TEST

START_TEST(test_parser_8) {
  data_t data = {0, 0, 0, NULL, NULL};
  data.arrEdges = malloc(sizeof(int));
  char fileName[512] = PATH;
  strncat(fileName, "hand.obj", 50);
  int status = parser(&data, fileName);
  int result = 0;
  result = data.countE + data.countP + data.countV;
  free(data.arrEdges);
  free(data.arrVertexes);
  ck_assert_int_eq(result, 26426);
  ck_assert_int_eq(status, OK);
}
END_TEST

START_TEST(test_parser_9) {
  data_t data = {0, 0, 0, NULL, NULL};
  data.arrEdges = malloc(sizeof(int));
  data.arrVertexes = malloc(sizeof(double));
  char fileName[512] = PATH;
  strncat(fileName, "hand.obj", 50);
  int status = parser(&data, fileName);
  int result = 0;
  result = data.countE + data.countP + data.countV;
  free(data.arrEdges);
  free(data.arrVertexes);
  ck_assert_int_eq(result, 26426);
  ck_assert_int_eq(status, OK);
}
END_TEST

TCase *tcase_parser() {
  TCase *tcase = tcase_create("parser");
  tcase_add_test(tcase, test_parser_1);
  tcase_add_test(tcase, test_parser_2);
  tcase_add_test(tcase, test_parser_3);
  tcase_add_test(tcase, test_parser_4);
  tcase_add_test(tcase, test_parser_5);
  tcase_add_test(tcase, test_parser_6);
  tcase_add_test(tcase, test_parser_7);
  tcase_add_test(tcase, test_parser_8);
  tcase_add_test(tcase, test_parser_9);
  return tcase;
}
