/**
 * @Author	 	    Md. Chanchal Biswas
 * @Univeristy		Northern University of Business Technology, Khulna
 * @Department 		CSE
 * @Batch 		    Fall 2021
 * 
 * Problem:
 * Input two numeric number and find the maximum value
 *
 */

#include <stdio.h>

int main()
{
    float a,b;

    printf("Please enter a numeric number for a = ");
    scanf("%f", &a);
    printf("Please enter a number for b = ");
    scanf("%f", &b);

    if (a > b) {
        printf("Maximum value of a is %f\n", a);
    } else {
        printf("Maximum value of b is %f\n", b);
    }

    return 0;
}
