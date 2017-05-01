#include<stdio.h>
#include<conio.h>

/*
#define macro_name value

we could use a macro in another one

 1) object like macro
 2) function like macro

*/

#define LIMIT 10  // object like macro
#define TOP (LIMIT+10) // function like macro
#define NAME "Nirmal Vatsyayan"

int main(){
    int counter;

    for(counter=1; counter<=TOP; counter++){
        printf("%d\n",counter);

    }

    //predefined macros
    printf("Well done %s\n", NAME);
    printf("File :%s\n", __FILE__ );
    printf("Date :%s\n", __DATE__ );
    printf("Time :%s\n", __TIME__ );
    printf("Line :%d\n", __LINE__ );
    printf("STDC :%d\n", __STDC__ );
}
