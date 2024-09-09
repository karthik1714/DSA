//
//  main.c
//  TowerofHanoi
//
//  Created by Sriramoju Karthik on 09/03/24.
//


#include <stdio.h>
void TOH(int n , int a , int b , int c){
    if(n>0){
        TOH(n-1,a,c,b);
        printf("%d to %d\n",a,c);
        TOH(n-1, b, a, c);
    }
};
int main(int argc, const char * argv[]) {
    TOH(5,1,2,3);
    return 0;
}
