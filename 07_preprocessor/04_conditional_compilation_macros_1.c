#include<stdio.h>
#include<conio.h>

/*
#if
#else
#elif
#endif
*/

#define MARKS 50

int main(){

#if MARKS >= 95
    printf("GRADE -> A\n");
#elif MARKS >= 70
    printf("GRADE -> B\n");
#else
    printf("GRADE -> C\n");
#endif

}
