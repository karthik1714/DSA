
#include <stdio.h>
#include <stdlib.h>

struct Array {
    int A[10];
    int length;
    int size;
};

void display (struct Array arr){
    int i;
    printf("Elements are\n");
    for(i=0;i<(arr.length);i++){
        printf("%d ",arr.A[i]);
    }
}

void swap(int *n , int *m){
    int temp;
    temp = *m;
    *m=*n;
    *n=temp;
}

int linearSearch(int key, struct Array *arr){
    for(int i=0;i<arr->length;i++){
        if(key == arr->A[i]){
            swap(&arr->A[i],&arr->A[0]);
            return 0;
        }
    }return -1;
}


int main(int argc, const char * argv[]) {
    struct Array arr = {{1,2,3,4,5},5,10};
    int n;

    
    n=linearSearch(4,&arr);
    printf("%d\n",n);
    display(arr);
    
    return 0;
}


