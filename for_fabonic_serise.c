#include<stdio.h>
#include<conio.h>
int main()
{
    long x,y,z;
    int i,n;
    x=0;
    y=1;
    printf("Enter a num :");
    scanf("%d",&n);
    printf("%1d\t",y);
    for ( i = 1; i < n; i++)
    {
        z=x+y;
        printf("%1d\t",z);
        x=y;
        y=z;
    }
    printf("\n");

    
}