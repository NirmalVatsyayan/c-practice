#include<stdio.h>
#include<conio.h>

int main(){
   if (remove("nirmalv.txt") == 0){
       puts("File removed successfully !!");
   }else{
       puts("Error while removing file !!");
   }
}
