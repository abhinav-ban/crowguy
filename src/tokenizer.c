#include "headers.h"


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

void printer(node *head){
	if(!head) return;// void function cannot return null
	node *temp = head;
	while(temp){
		printf("%s\t",temp->cmd);
		temp = temp->next;
	}

}
