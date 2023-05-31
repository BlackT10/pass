/*
Hãy hiện thực hàm int* zeros(int n) tạo một mảng có n phần tử 0.
Đầu vào: Kích thước mảng n.

Đầu ra: Con trỏ trỏ tới mảng vừa được cấp phát.

Lưu ý: Trong trường hợp cấp phát thất bại, hàm sẽ trả về nullptr.
*/

#include <iostream>
using namespace std;

int* zeros(int n) {
    // TODO
    if(n <= 0){
        return nullptr;
    }
    else{ 
        int* arr = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = 0;
        }
        return arr;
    }
}

int main(){
    int n;
    cout<<"nhap so n: ";
    cin>>n;
    int* zeros(n);
}