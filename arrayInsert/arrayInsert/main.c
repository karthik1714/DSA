

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

void append (struct Array *arr , int x){
    if(arr->length < arr->size){
        arr->A[arr->length++]=x;
    }
}

void insert(struct Array *arr , int index , int x ){
    int i ;
    if(index >=0 && index <=arr->length){
        for(i=arr->length;i>index;i--){
            arr->A[i]=arr->A[i-1];
        }
            arr->A[index]=x;
            arr->length++;
    }
}

int main(int argc, const char * argv[]) {
    struct Array arr = {{1,2,3,4,5},5,10};
   // int i,n;

   // append(&arr,10);
    insert(&arr,0,10);
    display(arr);
    
    return 0;
}

