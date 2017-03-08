#include<stdio.h>
#include<conio.h>

int main(){

   char first_name[] = "Nirmal ";
   char last_name[] = "Vatsyayan";

   strcat(first_name, last_name);
   printf("%s\n\n", first_name);

   int length = strlen(first_name);
   printf("%d\n\n", length);
}
