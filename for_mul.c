#include<stdio.h>
#include<conio.h>
int main()
{
    int num1,num2,i,result=0;
    printf("Enter two num :");
    scanf("%d %d",&num1,&num2);
    for ( i = 1; i < num2; i++)
    {
        result=result+num1;
        printf("%d * %d =%d\n",num1,num2,result);

    }
    
}