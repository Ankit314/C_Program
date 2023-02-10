#include<stdio.h>
#include<conio.h>
int main()
{
    long num;
    int dig,sum;
    printf("Enter a num :");
    scanf("%1d->",&num);
    printf("%1d->",num);
    do
    {
        sum=0;
        while (num!=0)
        {
            dig=num%10;
            sum+=dig;
            num/=10;

        }
        printf("%d\t",sum);
        num=sum;

        
    }while(num/10!=0); 
    return 0;
    
}