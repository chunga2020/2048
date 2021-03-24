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

char *test_Cell_init() {
    Cell *c = Cell_create();
    mu_assert(c != NULL, "Failed to create Cell!");
    int value = 5;
    int rv = Cell_init(c, value);
    mu_assert(rv == 0 && c->val == value, "Cell_init() failed!");
    Cell_destroy(c);
    c = NULL;
    return NULL;
}

char *test_Cell_get_val() {
    Cell *c = Cell_create();
    mu_assert(c != NULL, "Failed to create Cell!");
    int value = 5;
    int rv = Cell_init(c, value);
    mu_assert(rv == 0 && c->val == value, "Cell_init() failed!");
    rv = Cell_get_val(c);
    mu_assert(rv == 5, "Got unexpected value from Cell_get_val()!");
    Cell_destroy(c);
    c = NULL;
    return NULL;
}

char *all_tests() {
    mu_suite_start();

    mu_run_test(test_Cell_create_and_destroy);
    mu_run_test(test_Cell_init);
    mu_run_test(test_Cell_get_val);

    return NULL;
}

RUN_TESTS(all_tests);
