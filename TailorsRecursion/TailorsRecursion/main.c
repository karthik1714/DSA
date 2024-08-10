

#include <stdio.h>

double t(int x , int n){
    static double p=1,f=1;
    double r ;
    if(n==0)
        return 1;
    else{
        r=t(x,n-1);
        p=p*x;
        f=f*n;
        return r+p/f;
    }
}

int main(int argc, const char * argv[]) {

    printf("%lf\n",t(3,20));
    return 0;
}
