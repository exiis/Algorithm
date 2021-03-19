#include<iostream>
#define MAX 10

using std::cout;

int arr[10] = { 7, 6, 0, 1, 4, 3, 9, 8, 2, 5 };

int main(void){
	/* n-1개를 비교 */
	/* 오름차순 */
	
	cout<<"**오름차순**\n";
	for(int i=1; i<MAX; i++){
		int cur = i;
		int v = arr[i];
		while(1){
			if(cur>0 && arr[cur-1]>v){
				arr[cur] = arr[cur-1];
				cur--;
			}
			else{
				arr[cur] = v;
				break;
			}
		}
	}

	for(int i=0; i<MAX; i++)
		cout<<"arr["<<i<<"] : "<<arr[i]<<"\n";

	/* 내림차순 */

	cout<<"**내림차순**\n";
	for(int i=1; i<MAX; i++){
                int cur = i;
                int v = arr[i];
                while(1){
                        if(cur>0 && arr[cur-1]<v){
                                arr[cur] = arr[cur-1];
                                cur--;
                        }
                        else{
                                arr[cur] = v;
                                break;
                        }
                }
        }

        for(int i=0; i<MAX; i++)
                cout<<"arr["<<i<<"] : "<<arr[i]<<"\n";

	return 0;
}
