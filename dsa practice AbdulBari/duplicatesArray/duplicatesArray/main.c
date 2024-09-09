
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

void duplicates(struct Array arr){
    int lastDuplicate = 0;
    for(int i =0;i<arr.length;i++){
        if(arr.A[i]==arr.A[i+1] && lastDuplicate!=arr.A[i]){
            printf("%d\n",arr.A[i]);
            lastDuplicate = arr.A[i];
        }
    }
}

void duplicatesCount(struct Array arr){
    int i ,j;
    for( i =0;i<arr.length-1;i++){
        if(arr.A[i]==arr.A[i+1]){
            j=i+1;
            while (arr.A[j]==arr.A[i]) {
                j++;
            }
            printf("%d repeated %d times\n",arr.A[i],j-i);
            i=j-1;
        }
    }
}

void duplicatesHash(struct Array arr){
    int *H;
    int h=20;
    H = (int *)malloc((h+1) * sizeof(int));
    for(int i=0 ; i<arr.length;i++){
        H[arr.A[i]]++;
    }
    for(int i=0;i<21;i++){
        if(H[i]>1){
            printf("%d , %d\n",i,H[i]);
        }
    }
    free(H);
}

void duplicatesUnsortedHashed(struct Array arr){
    int *H;
    int h=20;
    H = (int *)malloc((h+1) * sizeof(int));
    for(int i=0 ; i<arr.length;i++){
        H[arr.A[i]]++;
    }
    for(int i=0;i<21;i++){
        if(H[i]>1){
            printf("%d , %d\n",i,H[i]);
        }
    }
    free(H);
}




int main(int argc, const char * argv[]) {
    struct Array arr = {{   },10,10};
    //display(arr);
    duplicatesUnsortedHashed(arr);
    return 0;
}





