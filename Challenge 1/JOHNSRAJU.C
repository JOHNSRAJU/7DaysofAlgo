/*****************************************************************************
$ NAME - JOHNSRAJU
$ CREATOR - JOHNS RAJU 
$ PROGRAM - To determine PRIME NUMBER.
$ DATE - 22/06/21 
$ VERSION - 1.0 
*****************************************************************************/
#include<stdio.h>
int main()
{
    int number,numberHalf,i;
    printf("Enter a number\n");
    scanf("%d",&number);
    // if the given number is not divisible upto the half of given number-prime number.
    numberHalf=number/2;
    for (i=2 ; i<numberHalf; i++){
        if(number%i==0){
            break;// Non Prime number will stop before full execution.For non prime number i < half number.
        }
    }
    if (i<numberHalf){
        printf("%d is not a prime number.",number);
    } 
    else{
        printf("%d is a prime number.",number);
    }
    return 0;
}