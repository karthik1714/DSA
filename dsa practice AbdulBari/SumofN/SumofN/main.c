//
//  main.c
//  SumofN
//
//  Created by Sriramoju Karthik on 07/03/24.
//


/* Looping
 
 int sum(int n){
    int sum=0;
    if(n==0){
        return 0;
    }
    else{
        for(int i=1;i<n+1;i++){
            sum=sum+i;
        }
    }return sum;
    
}*/

int sum(int n){
    if(n==0)
        return 0;
    else
        return sum(n-1)+n;
}


#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    printf("%d",sum(5));
    return 0;
}
