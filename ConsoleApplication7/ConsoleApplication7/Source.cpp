#include <stdio.h>
int main(){
	int n;

	scanf_s("%d", &n);
	
	int x;

	x = n % 2;


	if (x==0){
		printf("�����ł��B\n");
	}

	if(x==1){
		printf("��ł��B\n");

	}


	return 0;

}