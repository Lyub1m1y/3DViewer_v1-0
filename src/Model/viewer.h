#ifndef VIEWER_H_
#define VIEWER_H_

#include <ctype.h>
#include <locale.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifndef OK
#define OK 0
#endif

#ifndef FAIL
#define FAIL 1
#endif

typedef struct data_t {
  int countV;           // количество вершин
  int countE;           // количество ребер
  int countP;           // количество полигонов
  double* arrVertexes;  // массив вершин
  int* arrEdges;        // массив ребер
} data_t;

typedef enum coordinate_t { X = 0, Y, Z, ALL } coordinate_t;

int parser(data_t* data, char* fileName);
void parserNumb(data_t* data, FILE* f);
void parserElem(data_t* data, FILE* f);
void bigToSmall(data_t* data);  // функция чтобы уменьшать большие объекты
int findValue(char* str, unsigned int* posit_i);
int countingEdges(char* str);
void moving(data_t* A, double move, int coordinate);
void affineTransforms(data_t* A, double angle, int coordinate);
void scaling(data_t* structData, double scale, int coordinate);

#endif  // VIEWER_H_
