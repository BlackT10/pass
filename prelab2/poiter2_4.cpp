/*
Hãy hiện thực hàm void deleteMatrix(int**& matrix, int r) thực hiện giải phóng ô 
nhớ cho một mảng động 2 chiều có r hàng. matrix được gán bằng giá trị NULL sau 
khi thực hiện hàm.

Đầu vào: Mảng động hai chiều matrix có số hàng r cần giải phóng ô nhớ.
*/

#include <iostream>
using namespace std;

void deleteMatrix(int**& matrix, int r) {
    // TODO;
    for (int i = 0; i < r; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;
    matrix = nullptr;
}

int main(){
    
}