
#include <stdio.h>

#include <math.h>

int main(){
	double a, b, c, x1, x2;

	scanf_s("%lf%lf%lf", &a, &b, &c);
	
	x1 = (-b + sqrt(b*b - (4*a*c))) / (2 * a);
	x2 = (-b - sqrt(b*b - (4*a*c))) / (2 * a);

	printf("%f %f\n", x1, x2);

	return 0;


}