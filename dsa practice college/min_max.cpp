// Online C compiler to run C program online
#include <stdio.h>

int main() {
int a[5]={1,2,3,5,6};
int min =a[0];
int max = a[0];
for(int i=1;i<5;i++){
    if(a[i]>max){
        max=a[i];
    }
    if(a[i]<min){
        min=a[i];
    }
}
printf("max :%d\nmin :%d",max,min);


    return 0;
}