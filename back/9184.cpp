#include<iostream>

using std::cout;
using std::cin;

int mem[21][21][21] = {0};
int cnt = 0;

int w(int a, int b, int c){
	cnt++;
        int result = 0;

        
        if(a<=0 || b<= 0 || c<=0)  return 1;
        if(a > 20 || b > 20 || c > 20) return w(20, 20, 20);
    
        if(mem[a][b][c] != 0) return mem[a][b][c];
        else if(a<b && b<c) result = w(a, b, c-1) + w(a, b-1, c-1) - w(a, b-1, c);
        else result = w(a-1, b, c) + w(a-1, b-1, c) + w(a-1, b, c-1) - w(a-1, b-1, c-1);

        mem[a][b][c] = result;
        return result;
}

int main(void){
        int a, b, c;
        int result = 0;

        while(1){
                cin >> a >> b >> c;
                //end loop
                if(a==-1 && b == -1 && c == -1 ) break;
		w(a, b, c);
        }
	cout <<"total colled : "<< cnt <<"\n";	

        return 0;
}

