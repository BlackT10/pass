/*
Hãy hiện thực hàm void shallowCopy(int*& newArr, int*& arr) có chức năng tạo một 
bản sao của một mảng một chiều.

Đầu vào: Mảng một chiều arr cần được sao chép.

Đầu ra: Mảng đích một chiều newArr cần sao chép tới.

Lưu ý: sau thực thi mảng được sao chép và mảng cần sao chép đều sử dụng chung một 
vùng nhớ.
*/

#include <iostream>
using namespace std;

void shallowCopy(int*& newArr, int*& arr) {
    // TODO
    newArr = new int[sizeof(arr)];
    for (int i = 0; i < sizeof(arr); i++) {
        newArr[i] = arr[i];
    }
}

int main(){
    int* arr = new int[2];
    arr[0] = 2; arr[1] = 3;
    int* newArr = nullptr;
    shallowCopy(newArr, arr);
    cout << newArr[0] << ' ' << newArr[1];
    delete[] arr;
}