#include <stdio.h>
#include <stdlib.h>
#include "calc.h"
int main(int argc, char** argv[]){

        /* THE VARIABLES ARE DECLARED*/
        int a, b;
        int sum, prod, diff;
        double quot;
       
        /*INPUTS ARE REQUESTED AND FED*/
printf("Enter the first integer:");
scanf(" %d ", &a);
	
	
printf("Enter the second integer:");
scanf(" %d ", &b);

	/*OPERATIONS ARE DONE AND VALUES ARE RETURNED*/
	sum = add(a,b);
        prod = multiply(a,b);
        quot = divide(a,b);
        diff = subtract(a,b);
        
        /*OUTPUT VALUES ARE DISPLAYED IN THE TERMINAL*/
printf("The sum of %d and %d is %d \n",a,b,sum);
printf("The product of %d and %d is %d \n",a,b,prod);
printf("The quotient of %d and %d is %f \n",a,b,quot);
printf("The difference of %d and %d is %d \n",a,b,diff);


return 0;
}
