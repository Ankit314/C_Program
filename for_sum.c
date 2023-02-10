#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n,sum=0,term=1;
    printf("Enter a Number :");
    scanf("%d",&n);
    for ( i = 1; i <n; i++)
    {
        sum+=term;
        printf("sum=%d\t",sum);
        term=term+i;
        printf("Term=%d\n",term);

    }
    printf("The Sum of series upto %d term is :%d\n",n,sum);
    
    
}