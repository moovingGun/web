#include <iostream>
#include <vector>
using namespace std;

// 배열이 최대 힙(Max-Heap)인지 확인하는 함수
bool isMaxHeap(const vector<int>& arr, int n) {
    // 힙의 속성: 부모 노드는 항상 자식 노드보다 크거나 같아야 함
    // 0-인덱싱 배열에서
    // 부모 노드 i의 왼쪽 자식은 2*i + 1
    // 부모 노드 i의 오른쪽 자식은 2*i + 2
    
    // 마지막 비-리프 노드부터 시작하여 루트까지 확인
    // 마지막 비-리프 노드의 인덱스는 (n / 2) - 1
    for (int i = (n / 2) - 1; i >= 0; i--) {
        int parent_val = arr[i];
        int left_child_idx = 2 * i + 1;
        int right_child_idx = 2 * i + 2;
        
        // 왼쪽 자식이 존재하고, 부모보다 크다면 최대 힙이 아님
        if (left_child_idx < n && parent_val < arr[left_child_idx]) {
            return false;
        }
        
        // 오른쪽 자식이 존재하고, 부모보다 크다면 최대 힙이 아님
        if (right_child_idx < n && parent_val < arr[right_child_idx]) {
            return false;
        }
    }
    
    // 모든 노드가 힙 속성을 만족하면 최대 힙
    return true;
}

// 배열이 최소 힙(Min-Heap)인지 확인하는 함수
bool isMinHeap(const vector<int>& arr, int n) {
    for (int i = (n / 2) - 1; i >= 0; i--) {
        int parent_val = arr[i];
        int left_child_idx = 2 * i + 1;
        int right_child_idx = 2 * i + 2;
        
        // 왼쪽 자식이 존재하고, 부모보다 작다면 최소 힙이 아님
        if (left_child_idx < n && parent_val > arr[left_child_idx]) {
            return false;
        }
        
        // 오른쪽 자식이 존재하고, 부모보다 작다면 최소 힙이 아님
        if (right_child_idx < n && parent_val > arr[right_child_idx]) {
            return false;
        }
    }
    return true;
}

// 배열 출력 함수
void printArray(const vector<int>& arr) {
    for (int val : arr) {
        cout << val << " ";
    }
    cout << endl;
}

int main() {
    cout << "=== 힙(Heap) 확인 알고리즘 ===" << endl << endl;
    
    // 예시 1: 최대 힙인 배열
    vector<int> maxHeapArr = {100, 19, 36, 17, 3, 25, 1, 2, 7};
    int n1 = maxHeapArr.size();
    cout << "배열 1: ";
    printArray(maxHeapArr);
    if (isMaxHeap(maxHeapArr, n1)) {
        cout << "→ 배열 1은 최대 힙입니다." << endl;
    } else {
        cout << "→ 배열 1은 최대 힙이 아닙니다." << endl;
    }
    cout << endl;
    
    // 예시 2: 최대 힙이 아닌 배열
    vector<int> notMaxHeapArr = {10, 20, 30, 5, 15}; // 10의 자식 20이 더 큼
    int n2 = notMaxHeapArr.size();
    cout << "배열 2: ";
    printArray(notMaxHeapArr);
    if (isMaxHeap(notMaxHeapArr, n2)) {
        cout << "→ 배열 2는 최대 힙입니다." << endl;
    } else {
        cout << "→ 배열 2는 최대 힙이 아닙니다." << endl;
    }
    cout << endl;
    
    // 예시 3: 최소 힙인 배열
    vector<int> minHeapArr = {1, 2, 3, 7, 8, 9, 10};
    int n3 = minHeapArr.size();
    cout << "배열 3: ";
    printArray(minHeapArr);
    if (isMinHeap(minHeapArr, n3)) {
        cout << "→ 배열 3은 최소 힙입니다." << endl;
    } else {
        cout << "→ 배열 3은 최소 힙이 아닙니다." << endl;
    }
    cout << endl;
    
    // 사용자 입력 테스트
    cout << "=== 사용자 입력 테스트 ===" << endl;
    cout << "배열 크기를 입력하세요: ";
    int size;
    cin >> size;
    
    vector<int> userArr(size);
    cout << "배열 원소 " << size << "개를 입력하세요: ";
    for (int i = 0; i < size; i++) {
        cin >> userArr[i];
    }
    
    cout << "입력한 배열: ";
    printArray(userArr);
    
    if (isMaxHeap(userArr, size)) {
        cout << "→ 최대 힙입니다." << endl;
    } else if (isMinHeap(userArr, size)) {
        cout << "→ 최소 힙입니다." << endl;
    } else {
        cout << "→ 힙이 아닙니다." << endl;
    }
    
    return 0;
}

