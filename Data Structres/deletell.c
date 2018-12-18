#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
void delete(struct node **head_ref,int key){
	struct node *last = *head_ref;
	struct node *temp;
	while(last->next != NULL && last->data != key){
	     temp = last;
	     last = last->next;
	}	
	if(last->next == NULL) return;
	else{
	    temp->next = last->next;
	    free(last);
	}
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
	append(&head,2);
	append(&head,4);
	append(&head,5);
	delete(&head,4);
	print_linkedlist(head);
	return 0;
}
