

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



int delete(struct Array *arr , int index){
    int i , x=0;
    if(index >= 0 && index < arr->length){
        x = arr->A[index];
        for(i = index; i < arr->length - 1; i++){
            arr->A[i] = arr->A[i+1];
        }
        arr->A[arr->length - 1] = 0; // Clearing the last element
        arr->length--;
        return x;
    }
    return 0;
}


int main(int argc, const char * argv[]) {
    struct Array arr = {{1,2,3,4,5},5,10};
   // int i,n;

   // append(&arr,10);
   // insert(&arr,0,10);
    printf("%d",delete(&arr, 1));
    display(arr);
    
    return 0;
}

