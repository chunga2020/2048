#include <stdio.h>
#include <stdlib.h>

#include "cell.h"
#include "dbg.h"

typedef struct cell {
    int val;
} Cell;

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
