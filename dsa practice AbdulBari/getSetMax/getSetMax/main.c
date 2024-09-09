

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

int get(struct Array arr, int i){
    if(i >0 && i<arr.length)
        return arr.A[i];
    return -1;
}

void set(struct Array *arr,int i , int x){
    if(i >0 && i<arr->length){
        arr->A[i]=x;
    }

}

int max(struct Array arr){
    int max=arr.A[0];
    for(int i=1;i<arr.length;i++){
        if(arr.A[i]>max)
            max=arr.A[i];
    }
    return max;
}

int min(struct Array arr){
    int min=arr.A[0];
    for(int i=1;i<arr.length;i++){
        if(arr.A[i]<min)
            min=arr.A[i];
    }
    return min;
}

int sum(struct Array arr){
    int t=0;
    for(int i=0;i<arr.length;i++){
        t=t+arr.A[i];
    }
    return t;
}

float avg(struct Array arr , int n){
    int t=0;
    for(int i=0;i<arr.length;i++){
        t=t+arr.A[i];
    }
    return (float)t/n;
}

int main(int argc, const char * argv[]) {
    struct Array arr = {{1,2,3,4,5},5,10};

    printf("Get : %d\n",get(arr, 3));
    set(&arr, 3, 7);
    display(arr);
    printf("\n");
    printf("Max : %d\n",max(arr));
    printf("Min : %d\n",min(arr));
    printf("Total : %d\n",sum(arr));
    printf("Avg : %f\n",avg(arr,arr.length));


    return 0;
}



