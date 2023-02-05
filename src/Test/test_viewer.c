#include <check.h>

#include "../Model/viewer.h"

TCase *tcase_parser();
TCase *tcase_actions();

int main() {
  Suite *suite = suite_create("viewer");
  suite_add_tcase((suite), tcase_parser());
  suite_add_tcase((suite), tcase_actions());
  SRunner *suite_runner = srunner_create(suite);
  srunner_run_all(suite_runner, CK_NORMAL);
  int failed_count = srunner_ntests_failed(suite_runner);
  srunner_free(suite_runner);
  return (failed_count != 0);
}
