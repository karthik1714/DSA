
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

void sum10(struct Array arr){
    int k=10;
    for(int i=0;i<arr.length-1;i++){
        for(int j=i+1;j<arr.length;j++){
            if(arr.A[i]+arr.A[j]==10){
                printf("%d+%d=%d\n",arr.A[i],k-arr.A[i],k);
            }
        }
    }
}

void sum10sorted(struct Array arr){
    int k=10;
    int i=0;int j=arr.length-1;
    while(i<j){
        if(arr.A[i]+arr.A[j]==k){
            printf("%d+%d=%d\n",arr.A[i],k-arr.A[i],k);
            i++;
            j--;
        }
        else if (arr.A[i]+arr.A[j]<k)
            i++;
        else
            j--;
    }
}

void sum10Hashed(struct Array arr){
    int *H;
    int h=16;
    int k=10;
    H = (int *)malloc((h+1) * sizeof(int));
    for(int i=0 ; i<arr.length;i++){
        if(H[k-arr.A[i]]!=0){
            printf("%d+%d=%d\n",arr.A[i],k-arr.A[i],k);
        }
        H[arr.A[i]]++;
    }
    free(H);
}




int main(int argc, const char * argv[]) {
    struct Array arr = {{1,3,4,5,6,8,9,10,12,14},10,10};
    //display(arr);
    sum10sorted(arr);
    return 0;
}





