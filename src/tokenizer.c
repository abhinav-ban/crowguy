#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include "tokenizer.h"
/*typedef struct n{
char *cmd;
struct node* n;
//struct grow* p;
}node;*/

node *node_cmd(const char *token){
	node *newnode = malloc(sizeof(node));
	if(!newnode) return NULL;
	newnode -> cmd = strdup(token);
	newnode -> next = NULL;
	return newnode;
}
node *append_cmd(node **head,node *nex){
	if(!nex) return *head;
	if(*head == NULL){
		*head = nex;
	return *head;
	}
	node *temp = *head;
	while(temp ->next ){
		temp = temp->next;
	}
	temp->next = nex;
	return *head;
	
}
