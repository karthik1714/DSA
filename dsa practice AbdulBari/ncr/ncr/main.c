

#include <stdio.h>

int c(int n , int r){
    if(r==0 || n==r)
        return 1;
    else
        return c(n-1,r-1)+c(n-1,r);
}

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("%d",c(5,2));
    return 0;
}
