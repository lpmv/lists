#include <stdlib.h>
#include <stdio.h>
#include "list.h"

int main(void){
	int i;
	struct node_struct * l = NULL;
	for(i = 0; i < 100000; i++){
		struct node_struct * nuevo ;
		nuevo = newNode(i);
		nuevo->next = l;
		l = nuevo;
	}
	print_list(l);

	printf("\n");


    struct node_struct *  m = reverse(l);
    print_list(m);

    int l1 = len_ite(l);
    printf("%d",l1);
    printf("\n");

    int l2 = len_rec(l);
    printf("%d",l2);
    printf("\n");

    int mx = max(l);
    printf("%d",mx);
    printf("\n");

	struct node_struct * next;
	while(l != NULL){
		next = l->next;
		free(l);
		l = next;
	}

	return 0;
}
