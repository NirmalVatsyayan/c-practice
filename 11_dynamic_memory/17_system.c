#include<stdio.h>
#include<conio.h>

int main(){

    if(system(NULL) != 0){
        system("dir");
    }else{
       puts("Command processor not present in your OS !!");
    }

}
