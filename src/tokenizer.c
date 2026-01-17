#include<stdio.h>
#include<string.h>
#include "tokenizer.h"
/*typedef struct grow{
char cmd;
struct grow* n;
}node;*/

int token_cmd(char* arr){
    char *t=strtok(arr," ");
    char *cmd[50];
    int i=0;
    while(t != NULL){
        cmd[i++]=t;
        t=strtok(NULL," ");
    }
    for(int j=0;j<i;j++){
        printf("%s\n",cmd[j]);
    }
    return 0;
}
//node* token_cmd()
