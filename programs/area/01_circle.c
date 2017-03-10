#include<stdio.h>
#include<conio.h>

int main(){
   float PI = 3.14, area, perimiter;
   int radius;

   printf("Enter radius :");
   scanf("%d", &radius);

   area = PI * (radius * radius);
   printf("Area is %f\n", area);

   perimiter = 2 * PI * radius;
   printf("Perimiter is %f", perimiter);

}
