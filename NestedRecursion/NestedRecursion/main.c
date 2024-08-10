

#include <stdio.h>

int fun(int n){
    if(n>100)
        return n-10;
    else
        return fun(fun(n+11));
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int r=fun(95);
    printf("%d",r);
    return 0;
}
