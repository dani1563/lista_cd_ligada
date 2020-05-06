#ifndef DNODE_H
#define DNODE_H
#include <stdbool.h>

typedef struct _dnode dnode;
typedef int DATA;

struct _dnode{
    DATA data;
    dnode *next;
    dnode *prev;
};

dnode *create_dnode(DATA data);
bool remove_dnode(dnode *n);
#endif