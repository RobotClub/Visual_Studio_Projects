#include <stdio.h>
int main(void){
	int n, i, value;
	int a[10];

	for (i = 0; i < 10; i++){
		a[i] = 0;
	}


	scanf_s("%d", &n);

	for (i = 0; i < n; i++){

		scanf_s("%d", &value);
		
		a[value]++;
	}

	for (i = 0; i < 10; i++){
		if (a[i]>0){
			printf("%d %d\n", i, a[i]);
		}
	}

	return 0;

}