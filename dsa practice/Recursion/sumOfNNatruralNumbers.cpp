#include <iostream>

using namespace std;

int sumOfNNumbers(int n){
    if(n<=0){
        return 0;
    }
    return n+sumOfNNumbers(n-1);
}

int main() {
    int x=5;
    cout<< sumOfNNumbers(x)<< endl;
}