#include <stdio.h>
#include <stdlib.h>
#include "math_functions.h"

unsigned long long int fact(unsigned int n)
{
	if(n>20)
	{
		printf("[ERROR]: The result will not fit into 'long long int' type - max input is 20\n");
		exit(EXIT_FAILURE);
	};

	if(n>0) return n * fact(n-1);
	else return 1;
}