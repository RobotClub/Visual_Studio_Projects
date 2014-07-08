#include <stdio.h>

int main(){

	int i, n, m, s;
	i = 1;
	s = 0;

	scanf_s("%d", &n);

	while (i <= n){
		scanf_s("%d", &m);
		s = s + m;
		
		++i;
	}
	printf("%d\n", s);
	return 0;
}