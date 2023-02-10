#include<stdio.h>
#include<conio.h>
int main()
{
    int num,rem,count=0,save;
    
    printf("Enter a num :");
    scanf("%d",&num);
    save=num;
    do
    {
        rem=num%10;
        count+=rem;
        num/=10;
    } while (num>0);
    printf("Number is :%d And Coutnt of Number is :%d",save,count);
    return 0;
    
}