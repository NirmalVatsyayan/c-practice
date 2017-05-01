#include<stdio.h>
#include<conio.h>

int main(){
   char name[50];
   char ch3[7];
   char ch4[] = {'N','I','R','M','A','L','\0'};


   char ch[7]={'n', 'i', 'r', 'm', 'a', 'l', '\0'};
   char ch2[7]="nirmal";  // string literal

   char str[100]="this is nirmal with c and java";
   char *sub;

   printf("Char Array Value is: %s, length is %d, size is %d\n", ch, strlen(ch), sizeof(ch));
   printf("String Literal Value is: %s, length is %d, size is %d\n", ch2, strlen(ch2), sizeof(ch2));

   printf("Enter your name: ");
   gets(name); //reads string from user
   printf("Your name is: ");
   puts(name);  //displays string

   strcpy(ch3, ch2); // (desctination, source)
   printf("Char Array Value is: %s\n", ch3);
   printf("is ch3 and ch2 equal ?? : %d\n", strcmp(ch3,ch2)); // 0 means equal

   strcat(ch3, ch2);
   printf("Char Array Value is: %s\n", ch3);
   printf("reverse of %s is %s\n", ch2, strrev(ch2));
   printf("lower case of %s is ", ch4);
   printf("%s\n",strlwr(ch4)); // inplace operation
   printf("Upper -> %s\n", strupr(ch4)); // inplace operation

   sub=strstr(str,"python");
   printf("\nSubstring is: %s",sub);
}
