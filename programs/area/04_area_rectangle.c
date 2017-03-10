#include<stdio.h>
#include<conio.h>

int main(){

   int length, width;
   int area;

   printf("Enter length of rectangle : ");
   scanf("%d", &length);

   printf("Enter width of rectangle : ");
   scanf("%d", &width);

   area = length * width;
   printf("Area of rectangle is %d", area);

}
