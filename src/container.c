#include "headers.h"
#define MAX_LOAD 
int shell_help(char **tok){
	printf("-------------this is help portal--------------\n");
	printf("1. cd -> to go in a directory\n");
	printf("2. ls -> to get the info of a directory\n");
	printf("3. exit -> to exit from shell\n");
	printf("4. history");
	return 1;
}

builtin_t builtins[]={
	{"help",shell_help},
	{"cd",shell_cd},
	{"ls",shell_ls},
	{"exit",shell_exit},
	{"history",shell_history}
};
int builtin_count = sizeof(builtins)/sizeof(builtin_t);
int shell_cd(char **tok){}
int shell_ls(char **tok){}
int shell_exit(char **tok){}
int shell_history(char **tok){
	(void)tok;
	FILE *f= fopen("history.txt","r");
	char buffer[100];
	while(fgets(buffer,sizeof(buffer),f)!=NULL){
		printf("%s",buffer);
	}
	return 0;	
}
