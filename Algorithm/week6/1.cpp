#include <iostream>
using namespace std;

int binarysearch(int A[], int first, int last, int x){
    if(first > last){
        return -1;
    }
    else{
        int mid = (first + last) / 2;

        if(x == A[mid]){
            return mid;
        }
        else if (x < A[mid]) {
            return binarysearch(A, first, mid - 1, x);
        }
        else{
            return binarysearch(A, mid + 1, last, x);
        }
    }
}

int main(){
    int A[] = {10, 20, 30, 40, 50, 60, 70};
    int n = sizeof(A)/sizeof(A[0]);
    int x = 70;

    int location = binarysearch(A, 0, n-1, x);
    cout << location << endl;
}