#include "headers.h"

int shell_help(char **tok){
	printf("-------------this is help portal--------------");
	printf("1. cd -> to go in a directory");
	printf("2. ls -> to get the info of a directory");
	printf("3. exit -> to exit from shell");
	return 1;
}

builtin_t builtins[]={
	{"help",shell_help},
	{"cd",shell_cd},
	{"ls",shell_ls},
	{"exit",shell_exit}
};
int builtin_count = sizeof(builtins)/sizeof(builtin_t);
