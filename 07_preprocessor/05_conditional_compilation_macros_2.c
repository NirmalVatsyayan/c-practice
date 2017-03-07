#include<stdio.h>
#include<conio.h>

/*
#ifdef
#ifndef
#undif
#endif

#ifdef MACRO NAME

#endif

#ifndef MACRO NAME

#endif

#undef

*/


#define INTEL

int main(){

#ifdef INTEL
    printf("INTEL MACRO DEFINED 1\n\n");
#endif // INTEL

#undef INTEL

#ifdef INTEL
    printf("INTEL MACRO DEFINED 2\n\n");
#endif // INTEL

}
