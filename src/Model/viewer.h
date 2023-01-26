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
  int v_count;       // vertexes - количество вершин
  int p_count;       // polygons - количество полигонов
  int e_count;       // edges - количество ребер
  int* edges;        // массив ребер
  double* vertexes;  // массив вершин
} data_t;

typedef enum coordinate_t { X = 0, Y, Z } coordinate_t;

int parser(data_t* data, char* file_name);
int find_value(char* str, unsigned int* pos_i);
int count_calc(char* str);
void moving(data_t* A, double move, int flag);
void rotation(data_t* A, double angle, int coordinate);
void scaling(data_t* A, double scale);

#endif  // VIEWER_H_
