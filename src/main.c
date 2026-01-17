#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "tokenizer.h"

int main(){
    	
	char choice,input[10];//fix the input size problem it is taking much more memory:
	int buff = 50;
	char* cm = (char*) malloc(buff * sizeof(char));
	do{
		printf("========hello welcome to the shell==========\n");
		printf("abhinavshell:~");
		
		fgets(cm,buff,stdin);	
		cm[strcspn(cm, "\n")] = 0;
		token_cmd(cm);
		printf("\ndo you want to contiue[y/n]:");
		fgets(input,sizeof(input),stdin);//scanf(" %c",&choice);
		choice = input[0];
		}while(choice == 'y');
    	free(cm);	
	return 0;
	
}
/*typedef struct node {
char cmd;
struct node* next;
}n;*/

