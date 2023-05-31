/*Mô tả tiếng Việt:
Cho một mảng động hai chiều matrix có kích thước r x c. Hiện thực hàm int** insertCol(int**& matrix, int r, int c, int* colArr, int col) tiến hành chèn mảng rowArr (có kích thước r) vào cột thứ col của matrix. 

Đầu vào: Mảng 2 chiều matrix có kích thước r x c, cột cần chèn colArr và vị trí chèn col.

Đầu ra: Mảng 2 chiều matrix sau khi được chèn.

English version:

Given a dynamic two-dimensional array of size r x c. Implement the function int** insertCol(int**& matrix, int r, int c, int* colArr, int col) that can insert the colArr array (with the size r) into the column position, col, of the matrix.

Input: The two-dimensional matrix of size r x c, the insert column rowArr and the insert position col.

Output: The two-dimensional matrix after insert.*/

int** insertCol(int**& matrix, int r, int c, int* colArr, int col) {
    // TODO
    int** newMatrix = new int*[r];
    for (int i = 0; i < r; i++) {
        newMatrix[i] = new int[c + 1];
        for (int j = 0; j < col; j++) {
            newMatrix[i][j] = matrix[i][j];
        }
        newMatrix[i][col] = colArr[i];
        for (int j = col; j < c; j++) {
            newMatrix[i][j + 1] = matrix[i][j];
        }
    }
    for (int i = 0; i < r; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;
    matrix = newMatrix;
    return matrix;
}