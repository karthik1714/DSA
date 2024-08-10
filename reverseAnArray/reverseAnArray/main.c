

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

void reverse(struct Array *arr){
    int i,j;
    int *B;
    B=(int *)malloc(arr->length * sizeof(int));
    for(i=arr->length-1,j=0;i>=0;i--,j++){
        B[j]=arr->A[i];
    }
    for(i=0;i<arr->length;i++){
        arr->A[i]=B[i];
    }
    free(B);
    
}

void reverse2(struct Array *arr){
    int i,j;
    
    for(i=0,j=arr->length-1;j>i;i++,j--){
        int temp =arr->A[i];
        arr->A[i]=arr->A[j];
        arr->A[j]=temp;
    }
    
}






int main(int argc, const char * argv[]) {
    struct Array arr = {{1,2,3,4,5},5,10};
    reverse2(&arr);
    display(arr);
    
    return 0;
}



