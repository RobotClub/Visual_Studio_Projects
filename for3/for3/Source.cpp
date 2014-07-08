#include <stdio.h>
int main(void){
	
	int i, a, b, c;

	c = 1;

	printf("’l‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n");
	scanf_s("%d", &a);

	printf("‰½æ‚µ‚½‚¢?\n");
	scanf_s("%d", &b);


	for (i = 0; i < b; i++){

		c = a*c;

	}

	printf("%d\n", c);

	return 0;
}