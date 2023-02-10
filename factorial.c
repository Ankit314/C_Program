#include<stdio.h>
#include<conio.h>
int main()
{
    int n,num;
    long fact=1;
    printf("Enter a number :");
    scanf("%d",&n);
    num=n;
    if (n<0)
    {
        printf("Plese Enter a Positive Number :");
    }
    else
    {
        while (n>1)
        {
            fact*=n;
            n--;
        }
        printf("Number is :%d And Factorial is :%1d",num,fact);
        return 0;
    }
    
    
}