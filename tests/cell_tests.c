#include "cell.h"
#include "minunit.h"

char *test_Cell_create() {
    Cell *c = Cell_create();
    mu_assert(c != NULL, "Failed to create Cell!");
    return NULL;
}

char *all_tests() {
    mu_suite_start();

    mu_run_test(test_Cell_create);

    return NULL;
}

RUN_TESTS(all_tests);
