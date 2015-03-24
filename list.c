#include <stdio.h>
#include "list.h"
#include <stdlib.h>
#include <assert.h>

struct node_struct * newNode(int v){
	struct node_struct *n = (struct node_struct*) malloc(sizeof(struct node_struct));
	assert(n != NULL);
	(*n).value = v;
	n->value = v;
	n->next = NULL;
	return n;
}

void deleteNode(struct node_struct *n){
	free(n);
}

void print_list(struct node_struct* l){
	printf("[");
	for(; l != NULL; l= l->next){
		printf("%d%c ", l->value, l->next != NULL ? ',': ']');
	}
}

/*Funcion que calcula la longitud de una lista de manera iterativa*/
int len_ite(struct node_struct* l){
    int len = 0;
    for(;l!=NULL;l=l->next){
        len += 1;
    }
    return len;
}

/*Funcion que calcula la longitud de una lista de manera recursiva*/
int len_rec(struct node_struct* l){
    if(l == NULL){
        return 0;
    }
    return 1 + len_rec(l->next);
}

/*Funcion que regresa el maximo de una lista*/
int max(struct node_struct* l){
    int max = l->value;
    for(;l!=NULL;l=l->next){
        if(max < l->value){
            max = l->value;
        }
    }
    return max;
}

/*Funcion que regresa la reversa de la lista*/
struct node_struct * reverse(struct node_struct * l){   
    if(l == NULL)
        return;
    if(l->next == NULL)
        return l;
    struct node_struct *  rev = l->next;
    l->next = NULL;
    reverse(rev)->next = l;
    return l;
}       

