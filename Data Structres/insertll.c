#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
void push(struct node **head_ref,int new_data){
	struct node *new_node = (struct node *)malloc(sizeof(struct node));
	new_node->data = new_data;
	new_node->next = *head_ref;
	*head_ref = new_node;
}
void insertAfter(struct node **head_ref,int key,int new_data){
	struct node *new_node = (struct node *)malloc(sizeof(struct node));
	struct node *last = *head_ref;
	while(last->next != NULL && last->data != key)
	     last = last->next;
	new_node->data = new_data;
	new_node->next = last->next;
	last->next = new_node;
}		
void append(struct node **head_ref,int new_data){
	struct node *new_node = (struct node *)malloc(sizeof(struct node));
	new_node->data = new_data;
	new_node->next = NULL;
	struct node *last = *head_ref;
	if(*head_ref == NULL){
	  *head_ref = new_node;
	   return;
	}
	while(last->next != NULL)
	     last = last->next;  
	last->next = new_node;
}
void print_linkedlist(struct node *n){
	while(n != NULL){
	     printf("%d ",n->data);
	     n = n->next;
	}
	printf("\n");
}
int main(){
	struct node *head = NULL;
	append(&head,3);
	push(&head,2);
	append(&head,4);
	append(&head,5);
	push(&head,1);
	insertAfter(&head,3,6);
	print_linkedlist(head);
	return 0;
}
