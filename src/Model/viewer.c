#include "viewer.h"

int parser(data_t* data, char* fileName) {
  setlocale(LC_ALL, "en_US.UTF-8");
  int status = OK;
  FILE* f;
  f = fopen(fileName, "r");
  if (f != NULL) {
    parserNumb(data, f);
    f = fopen(fileName, "r");
    if (f != NULL) {
      parserElem(data, f);
      // check obj big or small
      int flagCallFunc = 0;
      for (int i = 0; i < data->countV; i++) {
        if (data->arrVertexes[i] >= 20) {
          flagCallFunc = 1;
        }
      }
      if (flagCallFunc == 1) {
        bigToSmall(data);
      }
      fclose(f);
    } else {
      status = FAIL;
    }
  } else {
    status = FAIL;
  }
  return status;
}

void parserNumb(data_t* data, FILE* f) {
  unsigned int countV = 0, countP = 0, countE = 0;
  char str[255];
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
  if (data->arrEdges != NULL) {
    free(data->arrEdges);
  }
  if (data->arrVertexes != NULL) {
    free(data->arrVertexes);
  }
  data->arrVertexes = (double*)calloc(data->countV * 3, sizeof(double));
  data->arrEdges = (int*)calloc(data->countE * 2, sizeof(int));
}

void parserElem(data_t* data, FILE* f) {
  char str[255];
  char c;
  int number = 0;
  int numberE = 0;
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
}

void bigToSmall(data_t* data) {
  double max_el = 0.0;
  for (int i = 0; i < data->countV; i++) {
    if (max_el < data->arrVertexes[i]) {
      max_el = data->arrVertexes[i];
    }
  }
  for (int i = 0; i < (data->countV) * 3; i++) {
    data->arrVertexes[i] /= max_el;
  }
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

void moving(data_t* structData, double move, int coordinate) {
  for (int i = 0; i < (structData->countV); i++) {
    structData->arrVertexes[i * 3 + coordinate] += move;
  }
}

void affineTransforms(data_t* structData, double angle, int coordinate) {
  for (int i = 0; i < (structData->countV); i++) {
    double x = structData->arrVertexes[i * 3];
    double y = structData->arrVertexes[i * 3 + 1];
    double z = structData->arrVertexes[i * 3 + 2];
    if (coordinate == X) {
      structData->arrVertexes[i * 3 + 1] = cos(angle) * y - sin(angle) * z;
      structData->arrVertexes[i * 3 + 2] = sin(angle) * y + cos(angle) * z;
    } else if (coordinate == Y) {
      structData->arrVertexes[i * 3] = cos(angle) * x + sin(angle) * z;
      structData->arrVertexes[i * 3 + 2] = (-sin(angle)) * x + cos(angle) * z;
    } else if (coordinate == Z) {
      structData->arrVertexes[i * 3] = cos(angle) * x - sin(angle) * y;
      structData->arrVertexes[i * 3 + 1] = sin(angle) * x + cos(angle) * y;
    }
  }
}

void scaling(data_t* structData, double scale, int coordinate) {
  int i = coordinate;
  if (coordinate == ALL) {
    i = 0;
  }
  while (i < ((structData->countV) * 3)) {
    structData->arrVertexes[i] *= scale;
    if (coordinate == ALL) {
      i++;
    } else {
      i += 3;
    }
  }
}
