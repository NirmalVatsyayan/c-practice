#include<stdio.h>
#include<conio.h>

/*
#define macro_name value

we could use a macro in another one

*/

#define LIMIT 10
#define TOP (LIMIT+10)
#define NAME "Nirmal Vatsyayan"

int main(){
    int counter;

    for(counter=1; counter<=TOP; counter++){
        printf("%d\n",counter);

    }
    printf("Well done %s", NAME);
}
