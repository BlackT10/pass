/*
Hiện thực hàm sau:
void swap(int *ptr2, int *ptr2);
Thực hiện hoán đổi giá trị tại vị trí của 2 con trỏ trỏ tới.
Trong đó:
ptr1, ptr2 lần lượt là là các con trỏ trỏ tới vị trí cần hoàn đổi.
*/

#include <iostream>
using namespace std;

void swap(int *ptr1, int *ptr2)
{
    int tmp;
    tmp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = tmp;
}

int main(){
    int a = 5;
    int b = 6;
    swap(&a, &b);
    cout << a << ' ' << b;
}