#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "math_functions.h"

double square_root(double a)
{
	if(a<0){
		printf("[ERROR]: non-negative number expected\n");
		exit(EXIT_FAILURE);
	}
	else return sqrt(a);
}