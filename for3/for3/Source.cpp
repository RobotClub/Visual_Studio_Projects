#include <stdio.h>
int main(void){
	
	int i, a, b, c;

	c = 1;

	printf("�l����͂��Ă�������\n");
	scanf_s("%d", &a);

	printf("���悵����?\n");
	scanf_s("%d", &b);


	for (i = 0; i < b; i++){

		c = a*c;

	}

	printf("%d\n", c);

	return 0;
}