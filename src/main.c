#include "headers.h"


int main(){
	// this is array parsed repo
	node *head = NULL;
	char *str = NULL,choice,input[10];//fix the input size problem it is taking much more memory:
	int buff = 50;size_t n = 0;
	//char* cm = (char*) malloc(buff * sizeof(char));
	do{
		printf("========hello welcome to the shell==========\n");
		printf("abhinavshell:~");
		fflush(stdout);
		
		if(getline(&str,&n,stdin) == -1) break;	
		str[strcspn(str, "\n")] = 0;
		
		const char *t=strtok(str," ");
		
		//getline(&str,&n,stdin);
		while(t){
			
			node *newnode = node_cmd(t);
			append_cmd(&head,newnode);
			
			t=strtok(NULL," ");
		}//printer(head);
		executer_cmd(list_to_arr(head));

		//free(str);
		
		printf("\ndo you want to contiue[y/n]:");
		fgets(input,sizeof(input),stdin);//scanf(" %c",&choice);
		choice = input[0];
		}while(choice == 'y');
    	free(str);	
	return 0;
	
}

