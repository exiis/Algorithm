// #9012

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/* node def */
typedef struct Node{
        char data;
        struct Node* next;
}node;

/* top */
node* top = NULL;

/* open, close */
int close;
int open;

/* push */
void push(char ch){
        node* new_node = (node*)malloc(sizeof(node));
        new_node->data = ch;
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
	
	if(temp->data == ')')
		close++;
	else if(close > 0){
		close--;
	}

	else
		open++;
	

        free(temp);
}

int main(void){
        int N;
        int num;
	char* str = (char*)malloc(sizeof(char)*51);
        char ch;

        scanf("%d", &N);

        for(int i=0; i<N; i++){
		/* init close, open */
		close = 0;
		open = 0;

                scanf("%s", str);
		char* temp = str;
		char cur_ch = *temp;

		while(cur_ch){
			push(cur_ch);
			cur_ch = *(++temp);
			
		}

		while(top)
			pop();
		

		if(close == 0 && open == 0)
			printf("YES\n");
		else
			printf("NO\n");
		
	}
        return 0;
}

