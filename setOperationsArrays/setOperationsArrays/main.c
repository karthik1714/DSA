

#include <stdio.h>


void mergeSortedUnion(int a[],int m,int b[],int n,int r[]){
    int i=0,j=0,k=0;
    while(i<m && j<n){
        if(a[i]<b[j]){
            r[k]=a[i];
            k++;
            i++;
            
        }
        else if(a[i]==b[j]){
            r[k]=a[i];
            k++;
            j++;
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

void mergeSortedInter(int a[],int m,int b[],int n,int r[]){
    int i=0,j=0,k=0;
    while(i<m && j<n){
        if(a[i]<b[j]){
            i++;
            
        }
        else if(a[i]==b[j]){
            r[k]=a[i];

        }
        else{
           // r[k]=b[j];
            j++;
        }

    }
    while (i<m) {
      //  r[k]=a[i];
        i++;

    }
    while (j<n) {
       // r[k]=b[j];
        j++;
 
    }
    
    
}

void mergeSortedDiff(int a[],int m,int b[],int n,int r[]){
    int i=0,j=0,k=0;
    while(i<m && j<n){
        if(a[i]<b[j]){
            r[k]=a[i];
            k++;
            i++;
            
        }
        else if(a[i]==b[j]){
            j++;
            i++;
            
        }
        else{
            j++;
        }

    }
    while (i<m) {
        r[k]=a[i];
        i++;
        k++;
    }
    
}

int main(int argc, const char * argv[]) {
    int a[]={3,4,5,6,10};
    int b[]={2,4,5,7,12};
    int r[5];
    
   mergeSortedDiff(a, 5, b, 5, r);
    
    int i;
    printf("Elements are\n");
    for(i=0;i<3;i++){
        printf("%d ",r[i]);
    }

    return 0;
}

