#include<conio.h>
#include<stdio.h>
int main()
{
    float m1,m2,m3,m4,total,per;
    char grade;
    printf("Enter Your Number of 4 Subject :");
    scanf("%f %f %f %f",&m1,&m2,&m3,&m4);
    total=m1+m2+m3+m4;
    per=total/4;
    if(per>=95)
    grade='A';
    if(per<95 && per>=70)
    grade='B';
    if(per<70 && per>=55)
    grade='C';
    if(per<55 && per>=40)
    grade='D';
    if(per<40)
    grade='E';
    printf("Percent Is : %f And Grade Is %c",per,grade);
    getch();
}