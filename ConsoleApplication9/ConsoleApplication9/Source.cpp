#include <stdio.h>
int main(void){

	int i, n, r, c, d, e;

	scanf_s("%d %d", &n, &r);
	c = 1;

	for (i = 1; i <= r; i++){
		
		c = c*i;
	}


	d = n;

	for (i = 1; i < r; i++){
		n--;
		d = d*n;
	}

	printf("%d\n", c);

	printf("%d\n", d);

	e = d / c;

	printf("%d\n", e);



	return 0;
}