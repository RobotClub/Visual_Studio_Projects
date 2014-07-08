#include <stdio.h>
#include <math.h>

int main(){
	double a, b, c, d, x1, x2;
	

	scanf_s("%lf%lf%lf", &a, &b, &c);

	x1 = (-b + sqrt(b*b - (4 * a*c))) / (2 * a);
	x2 = (-b - sqrt(b*b - (4 * a*c))) / (2 * a);

	d = b*b - 4 * a*c;

	if (d == 0){
		printf("%f\n", x1);
	}

	if (d > 0){
		printf("%f %f\n", x1, x2);
	}

	return 0;

}