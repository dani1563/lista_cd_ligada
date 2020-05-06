#ifndef CDLIST_H
#define CDLIST_H

#include "dnode.h"

typedef struct _cdlist cdlist;

struct _cdlist{
    dnode *head;
    dnode *tail;
    int num;
};

cdlist *create_dlist();
bool remove_dlist(cdlist *l);

bool insert_init(cdlist *l, DATA data);
bool insert_end(cdlist *l, DATA data);
bool insert_dlist(cdlist *l, DATA data, int pos);

bool remove_init(cdlist *l);
bool remove_end(cdlist *l);
bool remove_pos(cdlist *l ,int pos);

DATA search_dlist(cdlist *l, int pos);
int locate_dlist(cdlist *l, DATA data);

void print_dlist(cdlist *l);

bool is_empty_dlist(cdlist *l);
void empty_dlist(cdlist *l);

bool delete_data(cdlist *l, DATA data);
#endif