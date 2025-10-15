#include <iostream>
using namespace std;

int BinarySearch(int A[], int first, int last, int x){
    if (first > last){
        return -1;
    }
    else{
        int mid = (first + last) / 2;

        if(x == A[mid]){
            return mid;
        }
        else if(x < A[mid]){
            return BinarySearch(A, first, mid - 1, x);
        }
        else{
            return BinarySearch(A, mid + 1, last, x);
        }
    }
}

int main(){
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 70;

    int location = BinarySearch(arr, 0, n - 1, x);

    if (location != -1){
        cout << x << "의 위치는 " << location << endl;
    }
    else{
        cout << "찾을수 없습니다." << endl;
    }

}
