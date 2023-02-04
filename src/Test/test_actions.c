#include <check.h>

#include "../Model/viewer.h"
#define PATH "/Users/alberttaychinov/Desktop/3DViewer_v1-0/src/objects/"

START_TEST(test_actions_1) {
  data_t data = {0, 0, 0, NULL, NULL};
  char fileName[512] = PATH;
  strncat(fileName, "cube.obj", 50);
  int status = parser(&data, fileName);
  int result = 0;
  result = data.countE + data.countP + data.countV;
  moving(&data, 1.90, 15);
  double temp = 0;
  for (int i = 0; i < data.countV; i++) {
    temp += data.arrVertexes[i];
  }
  free(data.arrEdges);
  free(data.arrVertexes);
  ck_assert_int_eq(result, 48);
  ck_assert_int_eq(status, OK);
  ck_assert_double_eq(temp, -2);
}
END_TEST

START_TEST(test_actions_2) {
  data_t data = {0, 0, 0, NULL, NULL};
  char fileName[512] = PATH;
  strncat(fileName, "cat.obj", 50);
  int status = parser(&data, fileName);
  int result = 0;
  result = data.countE + data.countP + data.countV;
  moving(&data, 0, 0);
  double temp = 0;
  for (int i = 0; i < data.countV; i++) {
    temp += data.arrVertexes[i];
  }
  free(data.arrEdges);
  free(data.arrVertexes);
  ck_assert_int_eq(result, 9464);
  ck_assert_int_eq(status, OK);
  ck_assert_double_eq_tol(temp, 195.7896156, 1e-7);
}
END_TEST

START_TEST(test_actions_3) {
  data_t data = {0, 0, 0, NULL, NULL};
  char fileName[512] = PATH;
  strncat(fileName, "cat.obj", 50);
  int status = parser(&data, fileName);
  int result = 0;
  result = data.countE + data.countP + data.countV;
  moving(&data, 10, 0);
  double temp = 0;
  for (int i = 0; i < data.countV; i++) {
    temp += data.arrVertexes[i];
  }
  free(data.arrEdges);
  free(data.arrVertexes);
  ck_assert_int_eq(result, 9464);
  ck_assert_int_eq(status, OK);
  ck_assert_double_eq_tol(temp, 3985.7896156, 1e-7);
}
END_TEST

START_TEST(test_actions_4) {
  data_t data = {0, 0, 0, NULL, NULL};
  char fileName[512] = PATH;
  strncat(fileName, "cat.obj", 50);
  int status = parser(&data, fileName);
  int result = 0;
  result = data.countE + data.countP + data.countV;
  affineTransforms(&data, 1, 1);
  double temp = 0;
  for (int i = 0; i < data.countV; i++) {
    temp += data.arrVertexes[i];
  }
  free(data.arrEdges);
  free(data.arrVertexes);
  ck_assert_int_eq(result, 9464);
  ck_assert_int_eq(status, OK);
  ck_assert_double_eq_tol(temp, 190.7665140, 1e-7);
}
END_TEST

START_TEST(test_actions_5) {
  data_t data = {0, 0, 0, NULL, NULL};
  char fileName[512] = PATH;
  strncat(fileName, "ball.obj", 50);
  int status = parser(&data, fileName);
  int result = 0;
  result = data.countE + data.countP + data.countV;
  affineTransforms(&data, 10, 0);
  double temp = 0;
  for (int i = 0; i < data.countV; i++) {
    temp += data.arrVertexes[i];
  }
  free(data.arrEdges);
  free(data.arrVertexes);
  ck_assert_int_eq(result, 56387);
  ck_assert_int_eq(status, OK);
  ck_assert_double_eq_tol(temp, -2049.7934738, 1e-7);
}
END_TEST

START_TEST(test_actions_6) {
  data_t data = {0, 0, 0, NULL, NULL};
  char fileName[512] = PATH;
  strncat(fileName, "ball.obj", 50);
  int status = parser(&data, fileName);
  int result = 0;
  result = data.countE + data.countP + data.countV;
  affineTransforms(&data, 3.1, 2);
  double temp = 0;
  for (int i = 0; i < data.countV; i++) {
    temp += data.arrVertexes[i];
  }
  free(data.arrEdges);
  free(data.arrVertexes);
  ck_assert_int_eq(result, 56387);
  ck_assert_int_eq(status, OK);
  ck_assert_double_eq_tol(temp, 5882.3194539, 1e-7);
}
END_TEST

START_TEST(test_actions_7) {
  data_t data = {0, 0, 0, NULL, NULL};
  char fileName[512] = PATH;
  strncat(fileName, "hand.obj", 50);
  int status = parser(&data, fileName);
  int result = 0;
  result = data.countE + data.countP + data.countV;
  scaling(&data, 3.1, 3);
  double temp = 0;
  for (int i = 0; i < data.countV; i++) {
    temp += data.arrVertexes[i];
  }
  free(data.arrEdges);
  free(data.arrVertexes);
  ck_assert_int_eq(result, 26426);
  ck_assert_int_eq(status, OK);
  ck_assert_double_eq_tol(temp, -271.2272522, 1e-7);
}
END_TEST

START_TEST(test_actions_8) {
  data_t data = {0, 0, 0, NULL, NULL};
  char fileName[512] = PATH;
  strncat(fileName, "hand.obj", 50);
  int status = parser(&data, fileName);
  int result = 0;
  result = data.countE + data.countP + data.countV;
  scaling(&data, 0, 1);
  double temp = 0;
  for (int i = 0; i < data.countV; i++) {
    temp += data.arrVertexes[i];
  }
  free(data.arrEdges);
  free(data.arrVertexes);
  ck_assert_int_eq(result, 26426);
  ck_assert_int_eq(status, OK);
  ck_assert_double_eq_tol(temp, -58.4779650, 1e-7);
}
END_TEST

TCase *tcase_actions() {
  TCase *tcase = tcase_create("actions");
  tcase_add_test(tcase, test_actions_1);
  tcase_add_test(tcase, test_actions_2);
  tcase_add_test(tcase, test_actions_3);
  tcase_add_test(tcase, test_actions_4);
  tcase_add_test(tcase, test_actions_5);
  tcase_add_test(tcase, test_actions_6);
  tcase_add_test(tcase, test_actions_7);
  tcase_add_test(tcase, test_actions_8);
  return tcase;
}
