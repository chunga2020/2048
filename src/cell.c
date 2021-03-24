#include <stdio.h>
#include <stdlib.h>

#include "cell.h"
#include "dbg.h"

Cell *Cell_create() {
    Cell *c = (Cell *)malloc(sizeof(Cell));
    check(c != NULL, "Failed to create Cell!");
    return c;
error:
    return NULL;
}

void Cell_destroy(Cell *c) {
    if (c != NULL) {
        free(c);
    }
}

int Cell_init(Cell *c, int value) {
    check(c != NULL, "Got NULL pointer!");

    c->val = value;
    return 0;
error:
    return -1;
}

int Cell_get_val(Cell *c) {
    check(c != NULL, "Got NULL pointer!");
    return c->val;
error:
    /* This is okay -- squares in 2048 always have non-negative values */
    return -1;
}

int Cell_set_val(Cell *c, int new_val) {
    check (c != NULL, "Got NULL pointer!");
    c->val = new_val;
    return 0;
error:
    return -1;
}
