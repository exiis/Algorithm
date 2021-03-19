#include<stdio.h>

int main(void){
	char ch[4];
	char result[4];

	for(int i=0; i<4; i++)
		scanf("%c", &ch[i]);

	if(ch[0] == 'E')
		result[0] = 'I';
	else
		result[0] = 'E';

	if(ch[1] == 'S')
		result[1] = 'N';
	else
		result[1] = 'S';

	if(ch[2] == 'F')
		result[2] = 'T';
	else
		result[2] = 'F';

	if(ch[3] == 'J')
		result[3] = 'P';
	else
		result[3] = 'J';

	for(int i=0; i<4; i++)
		printf("%c", result[i]);
	printf("\n");
	return 0;
}
