#include<stdio.h>
#include<conio.h>


void main( )
{
   int x,y,z;
   int i,j;

   //simple for loop
   for(x=1; x<=10; x++)
   {
       printf("number is %d\n",x);
   }

   /*
   you could use multiple variables
   in initialization and increment/decrement
   but in conditional statement, you could use
   either only 1 or any combination, but basically
   overall 1 condition only.

   x<10 is a condition
   x<10 || y <10 is also a combined condition
   both valid

   x<10, y<10 are two conditions, so not valid
   */
   printf("\nExecuting another loop\n\n");
   for(y=1,z=1; (y<=10 || z<=10); y++, z++){
       printf("I am here\n");
       y++;
   }
   printf("\n\n");


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
