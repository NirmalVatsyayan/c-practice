#include<stdio.h>
#include<conio.h>
/*
Array - finite ordered collection of homogenous  data
finite : size is fixed
ordered : data stored in continuous memory location
homogenous : similar type of data to be stored
*/


int main(){
    int index;
    int inner_index;
    int arr[5];
    int arr2d[5][5];
    //int marks[5] = {100,99,98,97,96, 95} // error

    // compile time initialization
    int marks[5] = {100,99,98,97,96};

    for (index = 0; index <5; index++){
        printf("value at index %d in array is %d\n", index, marks[index]);
    }

    // run time initialization
    index = 0;
    for (index=0; index<5; index++){
        printf("Enter value for array : ");
        scanf("%d",&arr[index]);
    }

    printf("\n\n");
    printf("printing data from run time initialized array\n\n");

    for (index=0; index<5; index++){
        printf("value : %d\n",arr[index]);
    }


    // run time initialization of 2d array
    index = 0;
    inner_index =0;
    printf("initializing 2d array\n");
    for (index=0; index<5; index++){
        for(inner_index=0; inner_index<5; inner_index++){
            printf("enter value for index %d, %d: ", index, inner_index);
            scanf("%d",arr2d[index][inner_index]);
        }
    }

    printf("\n\n");
    printf("Printing 2d array");
    for (index=0; index<5; index++){
        for(inner_index=0; inner_index<5; inner_index++){
            printf(arr2d[index][inner_index]);
        }
        printf("\n");
    }

}
