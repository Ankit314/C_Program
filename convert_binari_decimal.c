#include<stdio.h>
#include<conio.h>
int main()
{
    int n,nsave,rem,d,j=1,dec=0;
    printf("Enter a Binary Number :");
    scanf("%d",&n);
    nsave=n;
    while (n>0)
    {
        rem=n%10;
        d=rem*j;
        dec+=d;
        j*=2;
        n/=10;
    }
    printf("Binary Number Is :%d And Decimal Number is :%d",nsave,dec);
    return 0;
    

}