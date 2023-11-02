#include <stdio.h>
#include <stdlib.h>
#include "math_functions.h"

int main() {
	int first_number;
	int second_number;
	double first_number_float;
	double second_number_float;
	int operation_id;

	printf("Choose the operation to perform:\n");
	printf("1) Add\n");
	printf("2) Subtract\n");
	printf("3) Multiply\n");
	printf("4) Divide\n");
	printf("5) Factorial\n");
	printf("6) Square root\n");
	scanf("%i", &operation_id);

	const char error_message[] = "[ERROR]: invalid input (number expected)\n";

	switch(operation_id)
    {
        case 1:
        	printf("Enter first number to calculate the sum: ");
			if(scanf("%i", &first_number) != 1){
				printf("%s", error_message);
				break;
			};

			printf("Enter second number to calculate the sum: ");
			if(scanf("%i", &second_number) != 1){
				printf("%s", error_message);
				break;
			};
            
            printf("%d + %d = %ld\n", first_number, second_number, add(first_number, second_number));
            break;

        case 2:
        	printf("Enter first number to calculate the difference: ");
			if(scanf("%i", &first_number) != 1){
				printf("%s", error_message);
				break;
			};

			printf("Enter second number to calculate the difference: ");
			if(scanf("%i", &second_number) != 1){
				printf("%s", error_message);
				break;
			};

            printf("%d - %d = %ld\n", first_number, second_number, subtract(first_number, second_number));
            break;

        case 3:
        	printf("Enter first number to calculate the product: ");
			if(scanf("%i", &first_number) != 1){
				printf("%s", error_message);
				break;
			};

			printf("Enter second number to calculate the product: ");
			if(scanf("%i", &second_number) != 1){
				printf("%s", error_message);
				break;
			};

            printf("%d * %d = %ld\n", first_number, second_number, multiply(first_number, second_number));
            break;

		case 4:
        	printf("Enter first number to calculate the fraction: ");
			if(scanf("%lf", &first_number_float) != 1){
				printf("%s", error_message);
				break;
			};

			printf("Enter second number to calculate the fraction: ");
			if(scanf("%lf", &second_number_float) != 1){
				printf("%s", error_message);
				break;
			};

            printf("%.2lf / %.2lf = %.2lf\n", first_number_float, second_number_float, divide(first_number_float, second_number_float));
            break;


        case 5:
        	printf("Enter the number to calculate factorial: ");
			if(scanf("%i", &first_number) != 1){
				printf("%s", error_message);
				break;
			};

			printf("fact(%d) = %lld\n", first_number, fact(first_number));
            break;

        case 6:
        	printf("Enter the number to calculate square root: ");
			if(scanf("%lf", &first_number_float) != 1){
				printf("%s", error_message);
				break;
			};

			printf("sqrt(%.2lf) = %.2lf\n", first_number_float, square_root(first_number_float));
			break;

        default:
            printf("[Error]: operation number is not correct\n");
    }	
	return 0;
}