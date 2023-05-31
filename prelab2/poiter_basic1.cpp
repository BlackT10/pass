/*
Hiện thực hàm sau:
int getValueAtIndex(int *ptr, int k);
Trả về giá trị của tại vị trí được chỉ định trong mảng qua con trỏ.
Trong đó:
ptr là con trỏ tới phần tử đầu tiên trong mảng.
k là vị trí cần truy xuất phần tử (giá trị này không vượt quá độ dài của mảng).
*/

#include <iostream>
using namespace std;

int getValueAtIndex(int *ptr, int k)
{
        return *(ptr + k);
}

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int k = 3;
    cout << getValueAtIndex(arr, k);

}