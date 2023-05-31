/*
Cho một mảng động hai chiều matrix có kích thước r x c. Hiện thực hàm 
void insertRow(int**& matrix, int r, int c, int* rowArr, int row) tiến hành chèn 
mảng rowArr (có kích thước c) vào hàng thứ row của mảng matrix.

Đầu vào: Mảng 2 chiều matrix có kích thước r x c, hàng cần chèn rowArr và vị trí 
chèn row.

Đầu ra: Mảng 2 chiều matrix sau khi được chèn.
*/

#include <iostream>
using namespace std;

void insertRow(int**& matrix, int r, int c, int* rowArr, int row) {
    // TODO
    // Create a new matrix with an additional row
    int** newMatrix = new int*[r + 1];
    for (int i = 0; i < r + 1; i++) {
        newMatrix[i] = new int[c];
    }

    // Copy the old matrix into the new one up to the insertion point
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < c; j++) {
            newMatrix[i][j] = matrix[i][j];
        }
    }

    // Insert the new row
    for (int j = 0; j < c; j++) {
        newMatrix[row][j] = rowArr[j];
    }

    // Copy the rest of the old matrix into the new one
    for (int i = row; i < r; i++) {
        for (int j = 0; j < c; j++) {
            newMatrix[i + 1][j] = matrix[i][j];
        }
    }

    // Delete the old matrix and replace it with the new one
    for (int i = 0; i < r; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;
    matrix = newMatrix;
}

int main(){
    
}