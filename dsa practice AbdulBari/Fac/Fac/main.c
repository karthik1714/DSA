//
//  main.c
//  Fac
//
//  Created by Sriramoju Karthik on 07/03/24.
//

#include <stdio.h>
/*int fac(int n){
    if(n==0)
        return 1;
    else
        return fac(n-1)*n;
}*/
int fac(int n){
    int pro = 1;
    if(n==0)
        return 1;
    else{
        for(int i=1;i<n+1;i++){
            pro=pro*i;
            
        }
    }return pro;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("%d",fac(5));
    return 0;
}
