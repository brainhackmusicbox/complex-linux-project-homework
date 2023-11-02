#include <stdio.h>
#include "formatter.h"

#define MAX_INPUT_LEN 100

int main()
{
	char str[MAX_INPUT_LEN];
	int operation_id;
 
    printf("Input String: \n");
    scanf("%s", str);

    printf("Entered String is \"%s\"\n", str);
    printf("Choose the operation to do with your input\n");
    printf("1) Convert the String to upper case\n");
    printf("2) Convert the String to lower case\n");

    scanf("%i", &operation_id);

    switch(operation_id)
    {
        case 1:
        	toUpperCase(str);
    		printf("\"%s\"\n", str);
    		break;
    	case 2:
    		toLowerCase(str);
    		printf("\"%s\"\n", str);
    		break;
    	default:
            printf("[Error]: operation number is not correct\n");
	}

	return 0;
}