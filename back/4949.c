// #4949

#include<stdio.h>
#include<stdlib.h>


typedef struct Node{
	char data;
	struct Node* next;
}node;

node* top = NULL;
int flag = 1;

void push(char ch){
	node* new_node = (node*)malloc(sizeof(node));
	new_node->data = ch;
	new_node->next = NULL;
	if(top == NULL)
		top = new_node;
	else{
		new_node->next = top;
		top = new_node;
	}
}

void pop(){
	if(top == NULL) return;
	
	node* temp = top;
	top = top->next;
	free(temp);
}

int main(void){
	while(1){
		char * str = (char*)malloc(sizeof(char)*102);
		fgets(str, 102, stdin);
		char* temp = str;
		char c = *temp;
		flag = 1;
		
		if(c == '.') return 0;
		while(c != '.'){
			if(c == '(' || c == '[' )
				push(c);
			else if(c == ')'){
				if(top != NULL && top->data == '(')
					pop();
				
				else{
					flag = 0;
					break;
				}
			}
			else if(c == ']'){
				if(top != NULL && top->data == '[')
					pop();	
				else{
					flag = 0;
					break;
				}
			}
			c = *(++temp);
		}
		
		if(flag == 1 && top == NULL)
			printf("yes\n");
		else
			printf("no\n");

		while(top != NULL) pop();
		free(str);
	}
}
