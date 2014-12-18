//puting it on github
//to calculate gross salary
#include<stdio.h>
#include<conio.h>
void main()
{ int basic_sal;
float gross_sal,a1,a2;
clrscr();
 printf("Enter basic salary");
 scanf("%d",&basic_sal);
 a1=(4*basic_sal)/10;
 a2=(2*basic_sal)/10;
 gross_sal=basic_sal-a1-a2;
 printf("%f",gross_sal);
 getch();
 }
