#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void display(){
    puts("I am called before exit !!");
}

int main(){

    int counter = 0;

    if(atexit(display) != 0){
        puts("Failed to register on exit !!");
    }

    while(1){
        if(counter == 10){
            exit(0); // it will call registered exit program
            //_Exit(0); // it will not call registered exit program
        }
        printf("%d\n", counter);
        counter++;
    }

}
