/*
Trong class Array có khai báo các thuộc tính sau:

Thuộc tính p là con trỏ trỏ đến vùng nhớ Heap được cấp phát.

Thuộc tính size của Array chứa số lượng phần tử của mảng.

Yêu cầu: SV hiện thực phương thức được mô tả như sau:
operator[](int idx): quá tải toán tử [] để thực hiện được cả 2 việc: đọc (lấy) giá trị của phần tử ở vị trí idx và ghi (gán) một giá trị mới 
vào phần tử ở vị trí idx. 

Ví dụ: đọc: x = a[2], ghi: a[2] = 5 với a là một đối tượng của class Array. 
Nếu idx có giá trị không hợp lệ (idx < 0 hoặc idx >= size) thì throw -1;
*/

template <typename T>
class Array {
public:
    Array(int size, T initValue);
    ~Array();

    void setAt(int idx, const T & value);
    T getAt(int idx);
    T& operator[](int idx);
    
    void print();

private:
    int size;
    T * p;
};

template<typename T>
void Array<T>::print() {
    for (int i = 0; i < this->size; ++i) {
        cout << (i > 0 ? " " : "")
            << this->p[i];
    }
    cout << endl;
}

// TODO
template <typename T>
T& Array<T>::operator[](int idx) {
    if (idx < 0 || idx >= size) {
        throw -1;
    }
    return p[idx];
}