#include "headers.h"

char *list_to_arr(node *head){
	int count;
	node *temp =head;

	while(temp){
		count++;
		temp=temp->next;
	}
	temp = head;
	char *arr = malloc(sizeof(char*)*(count+1));
	for(int i=0;i<count;i++){
		arr[i] = temp->cmd;
		temp = temp->next;
	}
	return *arr;
}

int executer_cmd(char *args){
	for(int i=0;i<builtin_count;i++){
		if(strcmp(builtins[i].name,args[0])==0){
			return builtins[i].fun(*args);
		}
	}
	return 1;
}
