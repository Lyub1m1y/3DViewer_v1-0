#include "viewer.h"

// int main() {
//   data_t data;
//   char* fileName =
//       "/Users/katrinap/Desktop/3DViewer_v1-main/src/objects/cube.obj";
//   parser(&data, fileName);
//   return 0;
// }

int parser(data_t* data, char* fileName) {
  int status = OK;
  FILE* f;
  f = fopen(fileName, "r");
  if (f != NULL) {
    unsigned int countV = 0, countP = 0, countE = 0;
    char str[255];
    char c;
    int number = 0;
    while (fgets(str, 255, f)) {
      if (str[0] == 'v' && str[1] == ' ') {
        countV++;
      }
      if (str[0] == 'f' && str[1] == ' ') {
        countE += countingEdges(str);
        countP++;
      }
    }
    fclose(f);
    data->countV = countV;
    data->countP = countP;
    data->countE = countE;
    data->arrVertexes = (double*)calloc(data->countV * 3, sizeof(double));
    data->arrEdges = (int*)calloc(data->countE * 2, sizeof(int));
    int numberE = 0;
    f = fopen(fileName, "r");
    while (fgets(str, 255, f)) {
      if (str[0] == 'v' && str[1] == ' ') {
        sscanf(str, "%c %lf %lf %lf", &c, &data->arrVertexes[number],
               &data->arrVertexes[number + 1], &data->arrVertexes[number + 2]);

        number += 3;
      }
      if (str[0] == 'f' && str[1] == ' ') {
        int value = 0, countE_in_str = 0;
        countE_in_str = countingEdges(str);
        int e_tmp = 0;
        int tmp_val = 0;
        for (unsigned int i = 2; i < strlen(str); i++) {
          if (str[i] == '/') {
            while (str[i] != ' ') {
              i++;
            }
          }
          if (isdigit(str[i])) {
            value = findValue(str, &i) - 1;
            data->arrEdges[numberE] = value;
            if (e_tmp == 0) {
              tmp_val = value;
              e_tmp++;
            } else if (numberE > 0 && countE_in_str != 0) {
              numberE++;
              data->arrEdges[numberE] = value;
            }

            countE_in_str--;
            numberE++;
            if (countE_in_str == 0) {
              data->arrEdges[numberE] = tmp_val;
              numberE++;
            }
          }
        }
      }
    }
    fclose(f);
  } else {
    status = FAIL;
  }
  return status;
}

int findValue(char* str, unsigned int* posit_i) {
  char arr[8] = {0};
  int i = *posit_i;
  int j = 0;
  while (1) {
    if ((str[i] >= 48) && (str[i] <= 57)) {
      arr[j] = str[i];
      j++, i++;
    } else {
      break;
    }
  }
  int tmp = atoi(arr);
  *posit_i += j - 1;
  return tmp;
}

int countingEdges(char* str) {
  int in_digit = 0, count = 0;
  for (unsigned int i = 2; i < strlen(str); i++) {
    if (str[i] == '/') {
      while (str[i] != ' ') {
        i++;
      }
    }
    if (isdigit(str[i])) {
      if (!in_digit) {
        count++;
        in_digit = 1;
      }
    } else {
      in_digit = 0;
    }
  }
  return count;
}

void moving(data_t* A, double move, int coordinate) {
  for (int i = 0; i < (A->countV); i++) {
    A->arrVertexes[i * 3 + coordinate] += move;
  }
}

void affineTransforms(data_t* A, double angle, int coordinate) {
  for (int i = 0; i < (A->countV); i++) {
    double x = A->arrVertexes[i * 3];
    double y = A->arrVertexes[i * 3 + 1];
    double z = A->arrVertexes[i * 3 + 2];
    if (coordinate == 0) {
      A->arrVertexes[i * 3 + 1] = cos(angle) * y - sin(angle) * z;
      A->arrVertexes[i * 3 + 2] = sin(angle) * y + cos(angle) * z;
    } else if (coordinate == 1) {
      A->arrVertexes[i * 3] = cos(angle) * x + sin(angle) * z;
      A->arrVertexes[i * 3 + 2] = (-sin(angle)) * x + cos(angle) * z;
    } else if (coordinate == 2) {
      A->arrVertexes[i * 3] = cos(angle) * x - sin(angle) * y;
      A->arrVertexes[i * 3 + 1] = sin(angle) * x + cos(angle) * y;
    }
  }
}

void scaling(data_t* A, double scale) {
  for (int i = 0; i < ((A->countV) * 3); i++) {
    A->arrVertexes[i] *= scale;
  }
}
