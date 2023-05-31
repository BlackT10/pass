/*
Hiện thực hàm sau:
void reverse(int *ptr, int n);
Đảo ngược mảng 1 chiều được cho bởi con trỏ.
Trong đó:
ptr là con trỏ tới phần tử đầu tiên trong mảng.
n là kích thước của mảng 1 chiều.

Lưu ý: Bạn cần phải dùng dereference operator (*) để lấy giá trị của các phần tử trong mảng. Không được dùng subscript operator ([]).
*/

void reverse(int *ptr, int n) {
    int *last = ptr + n - 1;
    while (ptr < last) {
        int temp = *ptr;
        *ptr++ = *last;
        *last-- = temp;
    }
}