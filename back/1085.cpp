#include<iostream>

using namespace std;

int main(void){
	double x, y, w, h;

	cin>>x, y, w, h;
	
	int min_x = x>=w/2 ? w-x : x;
	int min_y = y>=h/2 ? h-y : y;

	if(min_x > min_y)
		cout<<min_y;
	else
		cout<<min_x;
}
