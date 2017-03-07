#include<stdio.h>
#include<conio.h>
#include<string.h>

/*
important functions
strcat()	It is used to concatenate(combine) two string
strlen()	It is used to show length of a string
strrev()	It is used to show reverse of a string
strcpy()	Copies one string into another
strcmp()	It is used to compare two string

*/

int main(){
   char name[10] = "nirmal";
   char title[10] = {'v','a','t','s','y','a','y','a','n','\0'};
   int len;
   int cmp;

   //strcat
   strcat(name, title);
   printf(name);
   printf("\n");

   //strlen
   len = strlen(name);
   printf("length of name is %d",len);

   //strcmp
   printf("\n");
   cmp = strcmp(name, title);
   printf("%d",cmp);

}
