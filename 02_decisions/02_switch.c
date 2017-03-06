#include<stdio.h>
#include<conio.h>

/*
1) We don't use those expressions to evaluate switch case,
   which may return floating point values or strings.

   Basically, case expression must give integer result

2) It isn't necessary to use break after each block,
   but if you do not use it, all the consecutive block of
   codes will get executed after the matching block.

3) default case can be placed anywhere in the switch case.
   Even if we don't include the default case switch statement works
*/

int main(){
    int i = 10;

    switch(i){
      case 10:
           printf("i is 10");
           break;
      case 11:
           printf("i is 11");
           break;
      default:
           printf("this is default case");
           break;
    }
}
