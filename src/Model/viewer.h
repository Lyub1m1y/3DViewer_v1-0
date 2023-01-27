#ifndef VIEWER_H_
#define VIEWER_H_

#include <ctype.h>
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

typedef enum coordinate_t { X = 0, Y, Z } coordinate_t;

int parser(data_t* data, char* fileName);
int findValue(char* str, unsigned int* posit_i);
int countingEdges(char* str);
void moving(data_t* A, double move, int coordinate);
void affineTransforms(data_t* A, double angle, int coordinate);
void scaling(data_t* A, double scale);

#endif  // VIEWER_H_
