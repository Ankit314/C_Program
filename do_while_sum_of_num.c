#include<stdio.h>
#include<conio.h>
int main()
{
    int num,sum=0;
    do
    {
        printf("Enter a Number :");
        scanf("%d",&num);
        sum+=num;
    } while (num!=0);
    printf("Sum is :%d",sum);
    
}