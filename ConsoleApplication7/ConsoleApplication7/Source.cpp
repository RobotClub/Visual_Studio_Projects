#include <stdio.h>
int main(){
	int n;

	scanf_s("%d", &n);
	
	int x;

	x = n % 2;


	if (x==0){
		printf("偶数です。\n");
	}

	if(x==1){
		printf("奇数です。\n");

	}


	return 0;

}