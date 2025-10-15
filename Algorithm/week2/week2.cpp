#include <iostream>
using namespace std;

int calculate_factorial(int n){
    int result = 1;

    for(int i = 1; i <= n; i++){
        result = result * i;
    }
    return result;
}

int main() {
    int n;
    cout << "n의 값을 입력하세요: ";
    cin >> n;

    // 함수를 호출하여 결과 계산
    int result = calculate_factorial(n);
    cout << n << "!의 값은" << result << "입니다." << endl;

    return 0;
}
