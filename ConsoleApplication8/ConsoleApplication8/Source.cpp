#include <stdio.h>

int main(){
	int a, i, sum;

	sum = 0;

	scanf_s("%d", &a);

	while(a--){

		scanf_s("%d", &i);

		sum = sum + i;
		
	}
	printf("%d\n", sum);

	return 0;

}