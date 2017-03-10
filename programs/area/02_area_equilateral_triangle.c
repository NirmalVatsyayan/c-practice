#include<stdio.h>
#include<conio.h>
#include<math.h>

/*
Area of equilateral triangle is Root 3 / 2 * side *side
*/

int main(){

   int side;
   float area;
   float r_4 = sqrt(3)/4;

   printf("Enter length of side in triangle: ");
   scanf("%d",&side);

   area = r_4 * side * side;
   printf("Area of equilateral triangle is %f", area);

}
