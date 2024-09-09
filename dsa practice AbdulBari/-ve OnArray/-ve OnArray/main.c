

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

int checkSort(struct Array arr){
    int n= arr.length;
    for(int i=0;i<n-1;i++){
        if(arr.A[i]>arr.A[i+1]){
            return -1 ;
        }
    }
    return 1;
}

void insertSort (struct Array *arr,int x){
    int i=arr->length-1;
    if(arr->length==arr->size)
        return;
    while(arr->A[i]>x){
        arr->A[i+1]=arr->A[i];
        i--;
    }
    arr->A[i+1]=x;
    arr->length++;
}


void swap(int *n , int *m){
    int temp = *n;
    *n=*m;
    *m=temp;
}

void rearrange(struct Array *arr){
    int i = 0;
    int j = arr->length-1;
    while(i<j){
        while(arr->A[i]<0){
            i++;
        }
        while(arr->A[j]>=0){
            j--;
        }
        if(i<j){
            swap(&arr->A[i],&arr->A[j]);
        }
    }
}




int main(int argc, const char * argv[]) {
    struct Array arr = {{0,-2,3,-6,5},5,10};
    printf("%d",checkSort(arr)) ;
    rearrange(&arr);
    display(arr);
    
    return 0;
}




