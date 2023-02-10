#include<conio.h>
#include<stdio.h>
int main()
{
    int num,rem,product=1;
    printf("Enter a Number :");
    scanf("%d",&num);
    while (num>0)
    {
        rem=num%10;
        product*=rem;
        num/=10;
    }
    printf("Product Of Digit= %d",product);
    
}