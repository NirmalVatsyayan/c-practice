#include<stdio.h>
#include<conio.h>

int main(){
    int side;
    float area;

    printf("Enter length of side in triangle : ");
    scanf("%d",&side);

    area = .5 * side * side;
    printf("Area of equilateral triangle is : %f", area);

}
