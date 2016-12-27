#include<stdio.h>
#include<conio.h>

int main(){
   int data = 10;


   //if statement
   if (data == 10){
      printf("data is 10 !!\n\n");
   }

   //if-else statement
   if (data == 11){
       printf("ok !!");
   }else {
       printf("data is not 11 !!\n\n");
   }

   //if-elseif-else laddder

   if (data == 12){
       printf("ok !!");
   }else if (data == 13){
       printf("double ok !!");
   }else {
       printf("data is neither 12 nor 13\n\n");
   }

   // nested if

   if (data < 15){
       if (data > 8){
           printf("data is less than 15 AND data is greater than 8 !!");
       }

   }

}

