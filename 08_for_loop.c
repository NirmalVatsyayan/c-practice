#include<stdio.h>
#include<conio.h>


void main( )
{
   int x;
   int i,j;

   //simple for loop
   for(x=1; x<=10; x++)
   {
       printf("number is %d\n",x);
   }
   printf("\nExecuting nested for loop for half pyramid :D\n\n");

   // nested for loop
   for(i=1;i<5;i++)
   {
       for(j=i;j>0;j--)
       {
           printf("%d",j);
       }
       printf("\n");
   }

 getch();
}
