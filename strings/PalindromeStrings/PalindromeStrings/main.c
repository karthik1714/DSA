
#include <stdio.h>


int main(int argc, const char * argv[]) {
    
    char A[] = "sir";
    int i,j;
    char t;
    
    for(j=0;A[j]!='\0';j++){
        
    }
    j=j-1;
    for(i=0;i<j;i++,j--){
        if(A[i]!=A[j]){
            printf("Not Palindrome\n");
            return 0;
        }
            }
    printf("palindrome\n");


    

    return 0;
}
