#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "tokenizer.h"
int main(){
	node *head = NULL;
	char *str = NULL,choice,input[10];//fix the input size problem it is taking much more memory:
	int buff = 50;size_t n = 0;
	//char* cm = (char*) malloc(buff * sizeof(char));
	do{
		printf("========hello welcome to the shell==========\n");
		printf("abhinavshell:~");
		
		if(getline(&str,&n,stdin) == -1) break;	
		str[strcspn(str, "\n")] = 0;
		
		const char *t=strtok(str," ");
		
		//getline(&str,&n,stdin);
		while(t){
			
			node *newnode = node_cmd(t);
			append_cmd(&head,newnode);

			t=strtok(NULL," ");
		}
		//free(str);
		printf("\ndo you want to contiue[y/n]:");
		fgets(input,sizeof(input),stdin);//scanf(" %c",&choice);
		choice = input[0];
		}while(choice == 'y');
    	free(str);	
	return 0;
	
}
/*int main(){
	char choice,input[10];//fix the input size problem it is taking much more memory:

	do{

		char *str = NULL;
		size_t n = 0;
		printf("========hello welcome to the shell==========\n");
		printf("abhinavshell:~");
		getline(&str,&n,stdin);
		str[strcspn(str, "\n")] = 0;

		char *t=strtok(str," ");
		
		//getline(&str,&n,stdin);
		while(t!=NULL){
			printf("%s\n",t);//function;
			t=strtok(NULL," ");
		}
		free(str);
		
		fgets(cm,buff,stdin);	
		cm[strcspn(cm, "\n")] = 0;
		token_cmd(cm);
		printf("\ndo you want to contiue[y/n]:");
		fgets(input,sizeof(input),stdin);//scanf(" %c",&choice);
		choice = input[0];
	}while(choice == 'y');
	
}*/
/*typedef struct node {
char cmd;
struct node* next;
}n;*/

/*int token_cmd(char* arr){
    char *t=strtok(arr," ");
    char *cmd[50];
    int i=0;
    while(t != NULL){
        cmd[i++]=t;
        t=strtok(NULL," ");
    }
    for(int j=0;j<i;j++){
    d
        printf("%s\n",cmd[j]);
    }
 */
