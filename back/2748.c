#include<stdio.h>

int main(void){
    int n;
    scanf("%d", &n);
    
    if(n == 0) printf("0");
    else if(n==1) printf("1");
    else{
        long  F1 = 0;
        long  F2 = 1;
        long temp;
	 
        
        for(int i=0; i<n-1; i++){
            temp = F2;
            F2 = F1+F2;
            F1 = temp;
        }
        
        printf("%d", F2);
    }
}
