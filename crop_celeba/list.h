#ifndef LIST_H
#define LIST_H

typedef struct  node{
    void *val;
    struct node *next;
    struct node *prev;
} node;

typedef struct list{
    int size;
    node *front;
    node *back;
} list;
int list_find(list *l, void *val);

//void list_insert(list *l, void *val);

void **list_to_array(list *l);

void free_list(list *l);
void free_list_contents(list *l);

#endif
