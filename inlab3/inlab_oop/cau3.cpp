/*
Cho class template Array như bên dưới dùng để chứa một mảng (1 chiều) được khai báo trong vùng nhớ Heap. Trong class Array có khai báo một số phương thức (hàm) để thao tác với Array.

template <typename T>
class Array {
public:
    Array(int size, T initValue);
    ~Array();
    Array(const Array<T> & other); // Copy constructor
    Array<T> & operator=(const Array<T> & other); // Copy assignment operator
private:
    int size;
    T * p;
};
Trong class Array có khai báo các thuộc tính sau:

Thuộc tính p là con trỏ trỏ đến vùng nhớ Heap được cấp phát.

Thuộc tính size của Array chứa số lượng phần tử của mảng.

Yêu cầu: hiện thực hàm Copy Constructor và Copy Assignment operator:

Hàm Array(const Array<T> & other): copy constructor, khởi tạo đối tượng mới dựa trên dữ liệu của đối tượng được cung cấp (other). Đồng thời, in ra thông báo: "Call copy constructor"
Hàm operator=: copy assignment operator, gán giá trị của đối tượng hiện tại bằng giá trị của đối tượng được cung cấp. Đồng thời, in ra thông báo: "Call assignment operator" 
*/

#include <iostream>
using namespace std;

template <typename T>
class Array {
public:
    Array(int size, T initValue);
    ~Array();

    Array(const Array<T> & other); // Copy constructor
    Array<T> & operator=(const Array<T> & other); // Copy assignment operator
    
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
Array<T>::Array(const Array<T> & other) {
    size = other.size;
    p = new T[size];
    for (int i = 0; i < size; i++) {
        p[i] = other.p[i];
    }
    std::cout << "Call copy constructor" << std::endl;
}

template <typename T>
Array<T> & Array<T>::operator=(const Array<T> & other) {
    if (this != &other) {
        delete[] p;
        size = other.size;
        p = new T[size];
        for (int i = 0; i < size; i++) {
            p[i] = other.p[i];
        }
        std::cout << "Call assignment operator" << std::endl;
    }
    return *this;
}