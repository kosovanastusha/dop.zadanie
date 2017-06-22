#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "koren`.h"

double proverka(double a, double b, double c)
{
	double d;
	d = b * b - 4 * a * c;
	if (a == 0 || d < 0) {
		return 1;
		} else {
			return 0;
		}
}

double koren`1(double a, double b, double c, double x)
{
	double d;
	d = b * b - 4 * a * c;
	if (d > 0) { 
	    x = (-b - sqrt(d)) / (2 * a);
    }
	return x;
}

double koren`2(double a, double b, double c, double x)
{
	double d;
	d = b * b - 4 * a * c;
	if (d > 0) { 
	    x = (-b + sqrt(d)) / (2 * a);
    }
    return x;
}

double koren`3(double a, double b, double c, double x)
{
	double d;
	d = b * b - 4 * a * c;
	if (d == 0) {
		x = -b / (2 * a);
	}
	return x;
}