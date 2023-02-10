#include<conio.h>
#include<stdio.h>
int main()
{
     float m1,m2,m3,m4,total,per;
     char grade;
     printf("Enter your marks of 4 Subject :");
     scanf("%f %f %f %f",&m1,&m2,&m3,&m4);
     total=m1+m2+m3+m4;
     per=total/4;
     if(per>=95)
     grade='A';
     else if(per>=75)
     grade='B';
     else if(per>=55)
     grade='C';
     else if(per>=35)
     grade='D';
     else if(per>=15)
     grade='E';
     else
     grade='F';
     printf("Percentage Is :%f And Grade Is :%c",per,grade);
     getch();
}
