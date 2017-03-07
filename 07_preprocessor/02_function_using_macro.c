#include<stdio.h>
#include<conio.h>

#define CHECK(number) if( number >= 10) {\
                      printf("number is greater than or equal to 10\n");\
                      }else{\
                      printf("number is smaller than 10\n");}

int main(){

    CHECK(5);
    CHECK(25);

}
