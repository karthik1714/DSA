
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

int binarySearch(struct Array arr, int key){
    int mid,l,h;
    l=0;
    h=arr.length-1;
    while (l<=h) {
        mid=(l+h)/2;
        if(key==arr.A[mid])
            return mid;
        else if (key>arr.A[mid])
            l=mid+1;
        else
            h=mid-1;
    }
    return -1;
}

int RbinarySearch(int a[],int l,int h, int key){
    int mid;
    if (l<=h) {
        mid=(l+h)/2;
        if(key==a[mid])
            return mid;
        else if (key>a[mid])
            return RbinarySearch(a, mid+1, h, key);
        else
            return RbinarySearch(a, l, mid-1, key);
    }
    return -1;
}




int main(int argc, const char * argv[]) {
    struct Array arr = {{1,2,3,4,5},5,10};
    int n;

    n=RbinarySearch(arr.A,0,arr.length-1,1);
    printf("%d\n",n);
    //display(arr);
    
    return 0;
}



