#include <iostream>
using namespace std;

int factorial(int n){
    int result = 1;
    for(int i = 1; i <= n; i++){
        result = i * result;
    }
    return result;
}

int main(){
    cout << factorial(5) << endl;
}