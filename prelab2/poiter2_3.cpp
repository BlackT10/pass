/*
Hãy hiện thực hàm int** deepCopy(int** matrix, int r, int c) trả về một bản sao 
của matrix gồm r hàng và n cột. 

Đầu vào: Con trỏ matrix trỏ đến mảng hai chiều có kích thước r x c.

Đầu ra: Con trỏ trỏ đến mảng hai chiều được sao chép.

Lưu ý: sau thực thi, con trỏ trả về phải trỏ đến vùng nhớ được cấp phát mới và 
khi matrix truyền vào có kích thước 0, hàm trả về nullptr.
*/

#include <iostream>
using namespace std;

int** deepCopy(int** matrix, int r, int c) {
    // TODO
    if (r == 0 || c == 0) {
        return nullptr;
    }
    int** newMatrix = new int*[r];
    for (int i = 0; i < r; i++) {
        newMatrix[i] = new int[c];
        for (int j = 0; j < c; j++) {
            newMatrix[i][j] = matrix[i][j];
        }
    }
    return newMatrix;
}

int main(){
    int** m = new int*[2];
    m[0] = new int[2]; m[0][0] = 1; m[0][1] = 2;
    m[1] = new int[2]; m[1][0] = 1; m[1][1] = 3;
    int** n = deepCopy(m, 2, 2);
    cout << n[0][0] << ' ' << n[0][1] << '\n' << n[1][0] << ' ' << n[1][1];
}