
#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    int i,j;
   // int A[3][4]={{1,2,3,4},{2,3,4,5},{3,4,5,6}};
    
   // int *A[3];
    
    
    
   // A[0]=(int *)malloc(4*sizeof(int));
    //A[1]=(int *)malloc(4*sizeof(int));
    //A[2]=(int *)malloc(4*sizeof(int));

    int **c;
    c=(int **)malloc(3*sizeof(int *));
    c[0]=(int *)malloc(4*sizeof(int));
    c[1]=(int *)malloc(4*sizeof(int));
    c[2]=(int *)malloc(4*sizeof(int));
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}
