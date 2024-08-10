

#include <stdio.h>


void mergeSorted(int a[],int m,int b[],int n,int r[]){
    int i=0,j=0,k=0;
    while(i<m && j<n){
        if(a[i]<=b[j]){
            r[k]=a[i];
            k++;
            i++;
        }
        else{
            r[k]=b[j];
            k++;
            j++;
        }

    }
    while (i<m) {
        r[k]=a[i];
        i++;
        k++;
    }
    while (j<n) {
        r[k]=b[j];
        j++;
        k++;
    }
    
    
}

int main(int argc, const char * argv[]) {
    int a[]={2,3,5,7,8,10,11};
    int b[]={1,4,6,8,9};
    int r[10];
    
    mergeSorted(a, 7, b, 5, r);
    
    int i;
    printf("Elements are\n");
    for(i=0;i<12;i++){
        printf("%d ",r[i]);
    }

    return 0;
}
