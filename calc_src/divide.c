#include <stdio.h>
#include <stdlib.h>
#include "math_functions.h"

double divide(double a, double b)
{
	if(b==0){
		printf("[ERROR]: division by zero - non-zero 2nd argument expected\n");
		exit(EXIT_FAILURE);
	};
	return a / b;
}