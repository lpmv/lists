#include <stdio.h>
#include <stdlib.h>
#include "list.h"

struct node_struct * reverse(struct node_struct * l)
{
    if(l == Null){
        return;
    }
    struct node_struct * rev;
    rev = l;
    l = l->next;
    return reverse(l);
};
