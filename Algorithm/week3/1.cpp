#include <iostream>
using namespace std;

int fibonacci(int n){
    if(n < 0){
        return -1;
    }
    if(n <= 1){
        return n;
    }
    else{
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

int main(){
    cout << fibonacci(4) << endl;
    cout << fibonacci(-2) << endl;
}