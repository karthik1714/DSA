

#include <stdio.h>
#include <stdlib.h>

struct Array {
    int *A;
    int length;
    int size;
};

void display (struct Array arr){
    int i;
    printf("Elements are");
    for(i=0;i<(arr.length);i++){
        printf("%d ",arr.A[i]);
    }
}

int main(int argc, const char * argv[]) {
    struct Array arr ;
    int i , n;
    printf("Enter the size of Array : ");
    scanf("%d",&arr.size);
    arr.A = (int *)malloc(arr.size*(sizeof(int)));
    arr.length=0;
    
    printf("Enter the number of Elements you want to add : ");
    scanf("%d",&n);
    
    for(i=0;i<n;i++){
        scanf("%d",&arr.A[i]);
    }
    
    arr.length=n;
    
    display(arr);
    
    return 0;
}
