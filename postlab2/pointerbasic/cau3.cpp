/*
Hiện thực hàm sau:
bool isSymmetry(int *head, int *tail);
Kiểm tra mảng 1 chiều có phải là một mảng đối xứng hay không.
Trong đó:
head, tail lần lượt là con trỏ tới phần tử đầu tiên và cuối cùng trong mảng.
*/

bool isSymmetry(int *head, int *tail) {
    while (head < tail) {
        if (*head != *tail) {
            return false;
        }
        head++;
        tail--;
    }
    return true;
}