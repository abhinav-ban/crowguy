#include <stdio.h>
#include <stdlib.h>

int main() {
    char *str = NULL;   // pointer only
    size_t n = 0;

    printf("Enter a string: ");
    getline(&str, &n, stdin);

    printf("You entered: %s", str);

    free(str);
    return 0;
}
/*#include<stdio.h>
#include<stdlib.h>
typedef struct node {
int value;
struct node* next;
} n;

int main(){
	n* head;
	n* n1 =malloc(sizeof(n));
	n* n2 =malloc(sizeof(n));

	n1 -> value = 30;
	n1 ->next = n2;
	n2 -> value = 40;
	n2 ->next = NULL;
	head = n1;
	n* temp = head;
	while(temp!=NULL){
	printf("%d \n",temp->value);
	temp = temp->next;
	}
	return 0;

}*/
