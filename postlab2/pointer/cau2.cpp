/*
Cho một mảng động hai chiều matrix có kích thước r x c. Hiện thực hàm bool deleteRow(int**& matrix, int r, int c, int row) tiến hành xóa hàng thứ row của matrix. 
Đầu vào: Mảng 2 chiều matrix có kích thước r x c và vị trí hàng cần xóa row.

Đầu ra: Mảng 2 chiều matrix sau khi xóa hàng và kết quả xóa thành công hay không.

Lưu ý: Nếu mảng hai chiều xóa đi hàng cuối cùng, mà trận được truyền vào hàm sẽ trả về giá trị nullptr và đồng thời giải phóng toán bộ vùng nhớ của mảng hai chiều được cấp phát trước đó.
*/

bool deleteRow(int**& matrix, int r, int c, int row) {
    if (row < 0 || row >= r) {
        return false;
    }
    if (r == 1) {
        delete[] matrix[0];
        matrix = nullptr;
        return true;
    }
    int** newMatrix = new int*[r - 1];
    for (int i = 0; i < row; ++i) {
        newMatrix[i] = matrix[i];
    }
    for (int i = row + 1; i < r; ++i) {
        newMatrix[i - 1] = matrix[i];
    }
    delete[] matrix[row];
    delete[] matrix;
    matrix = newMatrix;
    return true;
}