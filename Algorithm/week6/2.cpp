#include <iostream>
using namespace std;

int countleaguegame(int n){
    if(n <= 1){
        return 0;
    }
    return countleaguegame(n-1) + n-1;
}

int main(){
    int team = 5;
    int total = countleaguegame(team);
    cout << total << endl;
}