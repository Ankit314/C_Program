#include<stdio.h>
#include<conio.h>
int main()
{
    int sum=0,num;
    // printf("Enter a num When you Enter 0 Counting is Stop :");
    // scanf("%d",&num);
    // sum+=num;
    printf("Enter a num When you Enter 0 Counting is Stop :");
         scanf("%d",&num);
    while (num!=0)
    {
         
         sum+=num;
    }
    printf("Sum of num=%d",sum);
    
    
}