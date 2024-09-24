#include <iostream>

using namespace std;

int sumOfDigits(int n){
    if(n<=0){
        return 0;
    }
    int digit=n%10;
    return digit+sumOfDigits(n/10);
}

int main() {
    int x=1234;
    cout<< sumOfDigits(x)<< endl;
}