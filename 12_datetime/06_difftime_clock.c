#include<stdio.h>
#include<conio.h>

#include<time.h>


void display(){
    printf("Elapsed time was %u seconds", clock()/CLOCKS_PER_SEC);
}

int main(){

    int i;
    time_t start, end;

    start = time(NULL);
    for(i=0; i<10000000; i++);
    getch();
    end = time(NULL);

    printf("forloop took %f seconds\n",difftime(end, start));

    display();
}
