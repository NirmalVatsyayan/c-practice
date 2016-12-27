#include<stdio.h>
#include<conio.h>

int main(){
   int data = 10;

   while(data > 5){
       printf("Bingo data is greater than 5!!\n");
       data--;
   }

   //break and continue statements
   data = 10;
   while(data>5){
       if (data == 15){
           printf("data is %d\n",data);
           break;  // execution will come out of loop here
       }else{
           if (data == 12){
               data++;
               continue;  // loop will goto execution start point
           }else{
               printf("data is %d\n",data);
               data++;
           }
       }
   }

}
