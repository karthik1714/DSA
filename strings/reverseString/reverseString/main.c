

#include <stdio.h>


int main(int argc, const char * argv[]) {
    
    char A[] = "python";
    char B[7];
    int i,j;
    char t;
    //    for(i=0;A[i]!='\0';i++){
    //
    //    }
    //    i=i-1;
    //    for(j=0;i>=0;i--,j++){
    //        B[j]=A[i];
    //    }
    //    B[j]='\0';
    //
    //    printf("%s",B);
    for(j=0;A[j]!='\0';j++){
        
    }
    j=j-1;
    for(i=0;i<j;i++,j--){
        t=A[i];
        A[i]=A[j];
        A[j]=t;
    }
      printf("%s",A);

    

    return 0;
}
