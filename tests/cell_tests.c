#include "cell.h"
#include "minunit.h"

char *test_Cell_create_and_destroy() {
    Cell *c = Cell_create();
    mu_assert(c != NULL, "Failed to create Cell!");
    Cell_destroy(c);
    c = NULL;
    mu_assert(c == NULL, "Failed to clean up!");
    return NULL;
}

char *all_tests() {
    mu_suite_start();

    mu_run_test(test_Cell_create_and_destroy);

    return NULL;
}

RUN_TESTS(all_tests);
