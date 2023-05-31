/*
Cho class template Array như bên dưới dùng để chứa mảng 1 chiều được khai báo trong vùng nhớ Heap.

template <typename T>
class Array {
public:
    Array(int size, T initValue);
    ~Array();
private:
    int size;
    T * p;
};

Trong class Array có khai báo các thuộc tính sau:

Thuộc tính p là con trỏ trỏ đến vùng nhớ Heap được cấp phát.

Thuộc tính size của Array chứa số lượng phần tử của mảng.

Yêu cầu:
SV hiện thực 2 phương thức được mô tả như sau:

Hàm Array(int size, T initValue): hàm khởi tạo(constructor), gán size vào số lượng phần tử của mảng; khởi tạo mảng 1 chiều có kích thước là size trong vùng nhớ Heap và lưu địa chỉ phần tử đầu tiên của mảng vào biến p.
Hàm ~Array(): hàm huỷ, thu hồi vùng nhớ Heap đã cấp phát.
SV thực hiện việc khai báo phương thức print (không định nghĩa) cho class Array.
*/

template <typename T>
class Array {
public:
    Array(int size, T initValue);
    ~Array();
    void print();
private:
    int size;
    T * p;
};
template <typename T>
Array<T>::Array(int size, T initValue){
    this->size = size;
        p = new T[size];
        for (int i = 0; i < size; i++) {
            p[i] = initValue;
        }
}
template <typename T>
Array<T>::~Array(){
    delete[] p;
}