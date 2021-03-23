#ifndef CELL_H
#define CELL_H

typedef struct cell Cell;

Cell *Cell_create();
void  Cell_destroy(Cell *c);

int Cell_init(int val);
int Cell_get_val(Cell *c);
int Cell_set_val(int new_val);

#endif
