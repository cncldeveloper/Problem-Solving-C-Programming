/**
 * @Author	 	    Md. Chanchal Biswas
 * @Univeristy		Northern University of Business Technology, Khulna
 * @Department 		CSE
 * @Batch 		    Fall 2021
 * 
 * Problem:
 * Find the sum of the numbers from 1 to n
 * 1 + 2 + 3 + ... ... ... + n
 */

#include <stdio.h>

int main()
{
    int n,sum;

    printf("Please enter an integer number of n: ");
    scanf("%d", &n);

    sum = ((n + 1) * n) / 2;
    printf("Sum of %d\n", sum);

    return 0;
}
