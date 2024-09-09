
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

int singleMissing(struct Array arr){
    int diff,i;
    diff=arr.A[0];
    for(i=0;i<arr.length-1;i++){
        if(arr.A[i]-i!=diff){
            return i+diff;
        }
    }
    return -1;
}

int singleMissing2(struct Array arr){
    int i,sum=0,s;
    int n = arr.A[arr.length-1];
    for(i=0;i<arr.length;i++){
        sum+=arr.A[i];
        }
    s=(n*(n+1))/2;
    if (s == sum) // If sum of elements is equal to sum of consecutive numbers from 1 to n
        return 0; // No missing element
    else
        return s - sum;
    }

void multipleMissing(struct Array arr){
    int diff,i;
    diff=arr.A[0];
    for(i=0;i<arr.length;i++){
        if(arr.A[i]-i!=diff){
            while(diff < arr.A[i]-i){
                printf("the missing elem: %d\n",i+diff);
                diff++;
            }
        }
    }
}

void anothermeth(struct Array *arr){
    struct Array *a;
    a=(struct Array *)malloc(sizeof(struct Array));
    
    for(int i=0;i<arr->length;i++){
        a->A[arr->A[i]]++;
    }
    int l=3;
    int h=17;
    for(int i=l;i<=h;i++){
        if(a->A[i]==0)
        printf("%d\n",i);
    }

}



int main(int argc, const char * argv[]) {
    struct Array arr = {{3,4,5,6,9,17},6,10};
    anothermeth(&arr);
    //display(arr);
    
    return 0;
}




