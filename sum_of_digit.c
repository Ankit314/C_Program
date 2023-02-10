#include<conio.h>
#include<stdio.h>
int main()
{
    int num,rem,sum=0;
    printf("Enter a Number :");
    scanf("%d",&num);
    while (num>0)
    {
        rem=num%10;
        sum+=rem;
        num/=10;
    }
    printf("Sum of Digit :%d",sum);
    return 0;
}