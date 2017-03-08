#include<stdio.h>
#include<conio.h>

/*

fopen("file name", "mode")

r - read
w - write
a - append

rb
wb
ab

r+
w+
a+

r+b
w+b
a+b

*/

int main(){

    FILE *fpointer;
    fpointer = fopen("nirmal.txt","w");

    if (fpointer == NULL){
        printf("Unable to create file ");
    }else{
        printf("File opened successfully\n\n");
        fclose(fpointer);
    }

}
