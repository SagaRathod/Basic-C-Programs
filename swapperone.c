#include <stdio.h>
//int main(int argc, char *argv[]) 
/*int main()
{
     printf("Enter first value: ");
     scanf("%d", &argc);
     int  b;
    // Second value from user
    printf("Enter second integer: ");
    scanf("%d", &b);

    printf("Before swapping: first = %d, second = %d\n", argc, b);

    // Swap using only one variable (no extra temp)
    argc = argc + b;
    b = argc - b;
    argc = argc - b;

    printf("After  swapping: argv[1] = %d, b = %d\n", argc, b);

    return 0;
}
 */

//2nd way
#include <stdio.h>
#include <stdlib.h>   // for atoi, sprintf

int main(int argc, char *argv[]) {
    if (argc < 3) {
        printf("Usage: %s <firstNumber> <secondNumber>\n", argv[0]);
        return 1;
    }
   
    printf("Before swapping: first = %s, second = %s\n", argv[1], argv[2]);

    // Convert argv[1] and argv[2] to ints and swap using argc as temp
    argc = atoi(argv[1]);        // store first number into argc
    argv[1] = argv[2];           // move second string into argv[1]
    argv[2] = malloc(20);        // allocate buffer for swapped first
    sprintf(argv[2], "%d", argc);

    printf("After  swapping: first = %s, second = %s\n", argv[1], argv[2]);

    return 0;
}
//3rd way
#include<stdio.h>
int main()
{
 
	int number;
 
	printf("Enter First Number:");
	scanf("%d",&number);
	printf("Enter Second Number:");
	scanf("%d",&number+1);
	
	*(&number+2)   = *(&number+1);
	*(&number+1)   = number;
		number    = *(&number+2);
 
	printf("After swapping\n");
	printf("first:%d \n",number);
	printf("second:%d \n",*(&number+1));	
	return 0;
}

          






