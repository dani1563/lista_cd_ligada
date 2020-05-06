#include "dnode.h"
#include <stdio.h>
#include <stdlib.h>

dnode *create_dnode(DATA data){
    dnode * d = (dnode*)malloc(sizeof(dnode));
    d->next = NULL;
    d->prev = NULL;
    d->data = data;
    return d;
}

bool remove_dnode(dnode *n){
    if(n->prev == NULL && n->next == NULL){
        free(n);
        return true;
    }
    return false;
}