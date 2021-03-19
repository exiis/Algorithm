// #10828

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/* node def */
typedef struct Node{
        int data;
        struct Node* next;
}node;

/* top, size */
node* top = NULL;
int size = 0;

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
        size++;
}

/* pop */
void pop(){
        /* no queue */
        if(top == NULL){
                printf("-1\n");
                return;
        }

        printf("%d\n", top->data);
        node* temp = top;
        top = top->next;

        free(temp);
        size--;
}

/* size */
void ptr_size(){
        printf("%d\n", size);
}

/* empty */
void is_empty(){
        if(top == NULL)
                printf("1\n");
        else
                printf("0\n");
}

/* top */
void ptr_top(){
        if(top != NULL )
                printf("%d\n", top->data);
        else
                printf("-1\n");
}

int main(void){
        int N;
        int num;
        char *cmd = (char*)malloc(sizeof(char)*10);

        scanf("%d", &N);

        for(int i=0; i<N; i++){
                scanf("%s", cmd);
                if(!strcmp(cmd, "push")){
                        scanf("%d", &num);
                        push(num);
                }
                else if(!strcmp(cmd, "pop"))
                        pop();
                else if(!strcmp(cmd, "size"))
                        ptr_size();
                else if(!strcmp(cmd, "empty"))
                        is_empty();
                else if(!strcmp(cmd, "top"))
                        ptr_top();
        }

        return 0;
}
