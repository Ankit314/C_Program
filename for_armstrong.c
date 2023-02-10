#include<stdio.h>
#include<conio.h>
int main()
{
    int num,n,cube,rem,sum;
    printf("Armstrong Number are :\n");
    for ( num = 100; num <=999; num++)
    {
        n=num;
        sum=0;
        while (n>0)
        {
            printf("n=%d",n);
            rem=n%10;
            n/=10;
            cube=rem*rem*rem;
            sum+=cube;
            printf("sum=%d\t",sum);

        }
        if(num==sum)
        printf("num=%d\n",num);
        
        
    }
    getch();
}