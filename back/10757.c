// #10757

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void){
	char* L = (char*)malloc(sizeof(char)*10002);
	char* S = (char*)malloc(sizeof(char)*10002);
	int flag = 0;
	scanf("%s %s", L, S);
	
	int len_l, len_s;
	len_l = strlen(L);
	len_s = strlen(S);

	/* swap var */
	if(len_l < len_s){
		int temp = len_l;
		len_l = len_s;
		len_s = temp;

		char* p_temp = L;
		L = S;
		S = p_temp;
	}

	for(int i=0; i<len_l; i++){
		if(i < len_s)
			*(L+len_l-1-i) += *(S+len_s-1-i)-48;
		if(*(L+len_l-1-i) > 57){
			*(L+len_l-1-i) -= 10;
			if(i == len_l-1) flag = 1;
			else *(L+len_l-2-i)+=1;
		}
	}

	if(flag) printf("1");

	for(int i=0; i<len_l; i++)
		printf("%c", *(L+i));
	return 0;
}

	

		
		
	
	

