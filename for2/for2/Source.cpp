#include <stdio.h>
int main (void){

	int i, n, x;

	x = 1;
	printf("x�̒l����͂��Ă�������\n");
	scanf_s("%d", &n);

	for (i = 1; i <= n;i++){
		
		x = i*x;
		
	}

	printf("x!= %d\n", x);

	return 0;
}