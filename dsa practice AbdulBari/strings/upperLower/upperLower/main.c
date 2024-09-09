
#include <stdio.h>
#include <ctype.h>

int main(int argc, const char * argv[]) {
    char A[] = "karthIk";
    int i;
    for(i=0;A[i]!='\0';i++){
                                                                   // if(isupper(A[i]))
                                                                     // A[i] = tolower(A[i]);
                                                                   // else if(islower(A[i]))
                                                                    //  A[i] = toupper(A[i]);
        if(A[i]>=65 && A[i]<=90)
            A[i]+=32;
        else if(A[i]>='a' && A[i]<=122)
            A[i]-=32;
    }
    printf("%s\n",A);
    return 0;
}

