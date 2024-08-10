
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

void minmaxSingle(struct Array arr){
    int min = arr.A[0];
    int max = arr.A[0];
    
    for(int i=0;i<arr.length;i++){
        if(arr.A[i]<min){
            min=arr.A[i];
        }
        else if (arr.A[i]>max){
            max=arr.A[i];
        }
    }
    printf("min,max: %d,%d\n",min, max);
    
}





int main(int argc, const char * argv[]) {
    struct Array arr = {{15,6,8,20,10,12,3,15,8},10,10};
    //display(arr);
    minmaxSingle(arr);
    return 0;
}






