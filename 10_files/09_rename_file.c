#include<stdio.h>
#include<conio.h>

int main(){
   if (rename("nirmal.txt","nirmalv.txt") == 0){
       puts("File renamed successfully !!");
   }else{
       puts("Error while renaming file !!");
   }

}
