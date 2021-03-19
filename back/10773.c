// #10773

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/* node def */
typedef struct Node{
        int data;
        struct Node* next;
}node;

/* top */
node* top = NULL;

/* push */
void push(int num){
        node* new_node = (node*)malloc(sizeof(node));
        new_node->data = num;
        new_node->next = NULL;

        if(top == NULL)
                top = new_node;
        else {
                new_node->next = top;
                top = new_node;
        }
}

/* pop */
void pop(){
        /* no queue */
        if(top == NULL)
                return;

        node* temp = top;
        top = top->next;

        free(temp);
}

/* sum */
void ptr_sum(){
	node* temp = top;
	int sum = 0;
	while(temp != NULL){
		sum += temp->data;
		temp = temp->next;
	}
	printf("%d\n", sum);
}

int main(void){
        int N;
        int num;
	int data;
        char *cmd = (char*)malloc(sizeof(char)*10);

        scanf("%d", &N);

        for(int i=0; i<N; i++){
		scanf("%d", &data);
		if(data != 0)
			push(data);
		else
			pop();
        }

	ptr_sum();

        return 0;
}

