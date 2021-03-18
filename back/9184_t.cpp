#include<iostream>

using std::cin;
using std::cout;

int cnt = 0;

int w(int a, int b, int c){
        cnt++;
        int result = 0;


        if(a<=0 || b<= 0 || c<=0)  return 1;
        if(a > 20 || b > 20 || c > 20) return w(20, 20, 20);
        else if(a<b && b<c) return w(a, b, c-1) + w(a, b-1, c-1) - w(a, b-1, c);
        else return w(a-1, b, c) + w(a-1, b-1, c) + w(a-1, b, c-1) - w(a-1, b-1, c-1);
}

int main(){
	int a, b, c;

	while(1){
		cin>>a>>b>>c;

		if(a == -1 && b == -1 && c == -1) break;
		else w(a, b, c);
	}
	cout<<"total called : "<<cnt<<"\n";
	return 0;
}


