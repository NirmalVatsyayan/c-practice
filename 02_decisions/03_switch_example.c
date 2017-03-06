#include<stdio.h>
#include<conio.h>

void main( )
 {
  int a,b,c,choice;
  //clrscr( );

  while(choice!=3)
  {
     printf("\n 1. Press 1 for addition");
     printf("\n 2. Press 2 for subtraction");
     printf("\n Enter your choice");
     scanf("%d",&choice);
     switch(choice)
     {
        case 1:
           printf("Enter 2 numbers");
           scanf("%d%d",&a,&b);
           c=a+b;
           printf("%d",c);
           break;
        case 2:
           printf("Enter 2 numbers");
           scanf("%d%d",&a,&b);
           c=a-b;
           printf("%d",c);
           break;
        default:
           printf("you have passed a wrong key");
           printf("\n press any key to continue");
      }
   }
 getch();
}
