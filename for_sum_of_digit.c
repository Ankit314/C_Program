#include<stdio.h>
#include<conio.h>
int main()
{
    int n,sum=0,rem=0;
    printf("Enter a Num :");
    scanf("%d",&n);
    for ( ; n>0; n/=10)
    {
        rem=n%10;
        sum+=rem;

    }
    printf("Sum of num is :%d",sum);

    
}