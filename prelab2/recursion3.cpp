/*
Cho một số dương, in theo một mẫu mà không sử dụng bất kỳ vòng lặp nào.

Đầu vào: n = 16

Đầu ra: 16, 11, 6, 1, -4, 1, 6, 11, 16 (không có khoảng trắng ở cuối)

Đầu vào: n = 10

Đầu ra: 10, 5, 0, 5, 10 (không có khoảng trắng ở cuối)

Về cơ bản, đầu tiên chúng ta bớt 5 cái một cho đến khi chúng ta đạt đến số âm hoặc 0
Sau khi chúng tôi đạt đến 0 hoặc số âm, chúng tôi thêm 5 cho đến khi chúng tôi đạt 
đến n.
*/

#include <iostream>
using namespace std;

void printPattern(int n){
     if(n>0){
         cout<<n;
        cout<<" ";
         printPattern(n-5);
         cout<<" ";
     }
     cout<<n;
}

int main() {
    // Write your code here
    printPattern(16);

    return 0;
}