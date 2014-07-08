#include <stdio.h>
int main(void){

	int i, a, b, c;

	scanf_s("%d %d", &a, &b);

	c = a;

	for (i = 1; i < b; i++){
		a--;
		c = c*a;
		
	}

	printf("%d\n", c);

	return 0;
}