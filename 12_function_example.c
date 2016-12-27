#include<stdio.h>
#include<conio.h>

int factorial(int x);

void main()
{
 int a,b;
 printf("Enter no.");
 scanf("%d",&a);
 b=factorial(a);
 printf("%d",b);
 getch();
}

int factorial(int x)
{
 int r=1;
 if(x==1) return 1;
 else r=x*factorial(x-1);
 return r;
}
