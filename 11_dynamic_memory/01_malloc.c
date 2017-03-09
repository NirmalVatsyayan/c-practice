#include<stdio.h>
#include<conio.h>

#include<stdlib.h>

int main(){
    int *p;
    float *f;
    char *c;
    char *input;
    int length;

    p = (int *)malloc(sizeof(int));
    f = (float *)malloc(sizeof(float));
    c = (char *)malloc(sizeof(char));

    if (p == NULL){
        puts("Failed to allocate memory !!");
    }else{
        *p = 20;
        printf("%d\n", *p);
        free(p);
    }

    if (f == NULL){
        puts("Failed to allocate memory !!");
    }else{
        *f = 20.11;
        printf("%f\n", *f);
        free(f);
    }

    if (c == NULL){
        puts("Failed to allocate memory !!");
    }else{
        *c = 'N';
        printf("%c\n", *c);
        free(c);
    }

    puts("Enter length of input data\n:");
    scanf("%d", &length);

    input = (char *)malloc(sizeof(char)*length+1);
    if (input == NULL){
        puts("Memory not allocated !!\n");
    }else{
        fflush(stdin);
        puts("Enter the string !!\n");
        gets(p);
        puts(p);
        free(p);
    }
}
