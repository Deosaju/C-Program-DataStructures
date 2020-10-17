/**
 * C program to print all prime numbers between 1 to n
 */

#include <stdio.h>
#include<math.h>
int main()
{
    int i, j, end, isPrime; // isPrime is used as flag variable
    //19.3sec
    /* Input upper limit to print prime */
    printf("Find prime numbers between 1 to : ");
    scanf("%d", &end);

    printf("All prime numbers between 1 to %d are:\n", end);

    /* Find all Prime numbers between 1 to end */
    for(i=2; i<=end; i++)
    {
        /* Assume that the current number is Prime */
        isPrime = 1; 
        int root =sqrt(i);
        /* Check if the current number i is prime or not */
        for(j=2; j<=root; j++)
        {
            /*
             * If i is divisible by any number other than 1 and self
             * then it is not prime number
             */
            if(i%j==0)
            {
                isPrime = 0;
                break;
            }
        }

        /* If the number is prime then print */
        if(isPrime==1)
        {
            printf("%d, ", i);
        }
    }

    return 0;
}

//we only want to go to root of the element.That will be the last element that completely divide the number 
//on small number the two programs dosen't seam to have any time diffrence ,but digits increase this will help to save a lot of time 
//some hack challanges have similar type of qs but we dont care for it !
//so always we only need to check upto the root the number to check it is divisible(prime numbers)
//this program takes 19.5 sec to find all prime upto 5555555
