#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "koren`.h"

int main() 
{
    double a, b, c, d, x=0;
    printf("Enter a: "); scanf("%lf", &a);
    printf("Enter b: "); scanf("%lf", &b);
    printf("Enter c: "); scanf("%lf", &c);
    if (proverka(a, b, c) == 1) {
		printf("Korney net\n");
	} else {
		d = b * b - 4 * a * c;
	    if (d > 0) {
			printf("\nx1 = %lf\nx2 = %lf\n", 
			koren`1(a, b, c, x), koren`2(a, b, c, x));
		} else {
			printf("\nx = %lf\n", koren`3(a, b, c, x));
		}
	}
    return 0;
}