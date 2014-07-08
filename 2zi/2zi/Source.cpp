#include <stdio.h>
#include<math.h>
int main(){
	double a = 1.0;
	double b = 5.0;
	double c = 6.0;
	double x1,x2;

	x1 = (-b+sqrt(b*b-4*a*c))/(2*a);
	x2 = (-b-sqrt(b*b-4*a*c))/(2*a);

	printf("%f%f\n", x1,x2);
}