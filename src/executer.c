#include "headers.h"

char **list_to_arr(node *head){
	int count=0;
	FILE *f = fopen("history.txt","w");
	if(f==NULL){
		return NULL;
	}
	node *temp =head;
	while(temp){
		count++;
		temp=temp->next;
	}
	temp = head;
	char **arr = malloc(sizeof(char*)*(count+1));
	for(int i=0;i<count;i++){
		arr[i] = strdup(temp->cmd);
		fprintf(f,"%s\n",arr[i]);
	
		temp = temp->next;
	}fclose(f);
	return arr;
}



int executer_cmd(char **args){
	for(int i=0;i<builtin_count;i++){
		if(strcmp(builtins[i].name,args[0])==0){
			return builtins[i].fun(args);
		}
	}
	return 1;
}


