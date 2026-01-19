/*#include <stdio.h>
#include <stdlib.h>

int main() {
    char *str = NULL;   // pointer only
    size_t n = 0;

    printf("Enter a string: ");
    getline(&str, &n, stdin);

    printf("You entered: %s", str);

    free(str);
    return 0;
}*/
#include<stdio.h>
#include<stdlib.h>
typedef struct node {
int value;
struct node* next;
} n;
n* insertion(int val, n* node){
	n* newnode = malloc(sizeof(n));
	newnode -> value = val;
	newnode ->next = node;

}

int main(){
	n* head;
	//* n1 = newnode(30,n2);
	//n* n2 = newnode(40,n3);
	n* n3 = insertion(50,NULL);
	n* n2 = insertion(40,n3);

	n* n1 = insertion(30,n2);

	head = n1;
	n* temp = head;
	while(temp!=NULL){
	printf("%d \n",temp->value);
	temp = temp->next;
	}
	return 0;

}
