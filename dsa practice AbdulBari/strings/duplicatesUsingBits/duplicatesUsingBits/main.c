//
//  main.c
//  duplicatesUsingBits
//
//  Created by Sriramoju Karthik on 14/05/24.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {

char A[]="finding";
int H=0;
int x;

for(int i=0;A[i]!='\0';i++){
    x=1;
    x=x<<(A[i]-'a');
    if(x&H){
        printf("%c is Duplicate\n",A[i]);
    }
    else
        H=x|H;
}

    return 0;
}
