/*
Cho class template Array như bên dưới dùng để chứa mảng 1 chiều được khai báo trong vùng nhớ Heap.

template <typename T>
class Array {
public:
    Array(int size, T initValue);
    ~Array();
    Array(const Array<T>& other);
private:
    int size;
    T * p;
};
Trong class Array có khai báo các thuộc tính sau:

Thuộc tính p là con trỏ trỏ đến vùng nhớ Heap được cấp phát.

Thuộc tính size của Array chứa số lượng phần tử của mảng.

Yêu cầu: SV hiện thực phương thức Copy Constructor (đươc tô màu đỏ), phương thức này khởi tạo một đối tương Array mới dựa trên một đối tượng Array khác.
*/

template <typename T>
class Array {
public:
    Array(int size, T initValue);
    ~Array();
    void print();
    
    Array(const Array<T> & other); // Copy Constructor
    
private:
    int size;
    T * p;
};

template<typename T>
void Array<T>::print() {
    for (int i = 0; i < this->size; ++i) {
        cout << (i > 0 ? " " : "") << this->p[i];
    }
    cout << endl;
}

// TODO
template <typename T>
Array<T>::Array(const Array<T>& other)
{
    size = other.size;
    p = new T[size];
    for (int i = 0; i < size; i++) {
        p[i] = other.p[i];
    }
}

