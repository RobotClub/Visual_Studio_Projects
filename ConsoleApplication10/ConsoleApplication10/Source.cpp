#include <stdio.h>
int main(void){

	int i, n;
	int a[10];

	scanf_s("%d", &n);

	for (i = 0; i < n; ++i){
		scanf_s("%d", &a[i]);
	}

	for (i = 0; i < n; ++i){
		printf("%d\n", a[i]);
	}

	return 0;

}