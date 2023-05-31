/*
Hiện thực hàm sau:
int findMax(int *ptr, int n);
Tìm và trả về phần tử lớn nhất trong mảng 1 chiều được cho bởi con trỏ.
Trong đó:
ptr là con trỏ tới phần tử đầu tiên trong mảng.
n là kích thước của mảng.
*/

int findMax(int *ptr, int n) {
    int max = *ptr;
    for (int i = 1; i < n; i++) {
        if (*(ptr + i) > max) {
            max = *(ptr + i);
        }
    }
    return max;
}