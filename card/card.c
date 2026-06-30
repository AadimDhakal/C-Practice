#include <stdio.h>

int check(long n)
{ 
    int sum=0;
    long removing_last_digit = n/10;
    while(removing_last_digit>0){
        int digit = removing_last_digit%10*2;
        if(digit>9){
            digit = digit%10 + digit/10;

        }
        sum+=digit;
        removing_last_digit/=100;
    }
    return sum;
    
}
int check2(long n)
{
    int sum=0;
    while(n>0){
        int digit = n%10;
        sum+=digit;
        n/=100;
    }
    return sum;
}

int main(void)
{
    long number;
    printf("Enter a the card number: ");
    scanf("%li", &number);
    int sum1=check(number);
    int sum2=check2(number);
    int total = sum1 + sum2;
    if(total%10!=0){
        printf("Invalid card number.\n");
    } else {
        printf("Valid card number.\n");//Here we put the card number whether it is american express, visa or mastercard
    }
}
