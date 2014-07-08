#include <stdio.h>
int main(void){
	int i, j, n, ID[10], gpa1[10], gpa2[10], gpa[10], rank[10];

	for (i = 0; i < 10; i++){
		gpa[i] = 0;
	}


	scanf_s("%d", &n);

	for (i = 0; i < n; i++){
		scanf_s("%d %d,%d", &ID[i], &gpa1[i], &gpa2[i]);
	}

	for (i = 0; i < n; i++){
		for (j = 0; j < n; j++){
			if (gpa1[i] < gpa1[j]){
				gpa[i]++;
			}
		}
	}


	for (i = 0; i < n; i++){
		for (j = 0; j < n; j++)
		if (gpa1[i] == gpa1[j] && gpa2[i] < gpa2[j]){
			gpa[i]++;
		}

	}

	for (i = 0; i < n; i++){
		rank[i] = gpa[i] + 1;

	}
	

	for (i = 0; i < n; i++){
		printf("%d %d,%d %d\n", ID[i], gpa1[i], gpa2[i], rank[i]);
	}

	return 0;

}