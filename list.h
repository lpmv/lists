struct node_struct{
	int value;
	struct node_struct* next;
};



struct node_struct * newNode(int v);

void deleteNode(struct node_struct *n);

void print_list(struct node_struct* l);
