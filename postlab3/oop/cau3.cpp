/*
template <class T> 
class Array2D {
	int m;
	int n;
	T** arr;
}
Class Array2D sẽ quản lý một ma trận mxn 

1. Hiện thực constructor gồm 2 tham số Array2D(int r, int c), cấp phát vùng nhớ cho mảng 2 chiều có kích thức r x c.

2. Hiện thực constructor gồm 3 tham số  Array2D(int r, int c, T init), khởi tạo các thành phần của mảng 2 chiều có kích thước r x c với giá trị khởi tạo toàn mảng là init.

3. Hiện thực destructor thực hiện thu hồi vùng nhớ đã được cấp phát động.

4. Overriding operator* thực hiện phép nhân ma trận với một đối tượng Array2D khác (chú ý điều kiện nhân ma trận). Yêu cầu trả về con trỏ đến kết quả là một đối tượng của Array2D, trong trường hợp không thỏa điều kiện nhân ma trận thì trả về NULL.

5. Overriding operator[] để trường hợp sau code có thể chạy được. Giả thiết rằng kiểu dữ liệu T*  đã overriding toán tử [] để trả ra giá trị tại vị trí cần thiết (ví dụ: arr[i] sẽ trả ra giá trị phần tử thứ i của mảng arr có kiểu dữ liệu T. Nói cách khác, sinh viên không cần quan tâm đến toán tử [] của *arr)


int main() {
    Array2D<int>* p = new Array2D<int>(1, 2, 3);
    cout << (*p)[0][1] << endl;
    return 0;
}
*/

template <class T> 
class Array2D {
private:
	int r;
	int c;
	T** arr;

public:
    // TODO
    Array2D(int r, int c) {
        this->r = r;
        this->c = c;
        arr = new T*[r];
        for (int i = 0; i < r; i++) {
            arr[i] = new T[c];
        }
    }
    Array2D(int r, int c, T init) {
        this->r = r;
        this->c = c;
        arr = new T*[r];
        for (int i = 0; i < r; i++) {
            arr[i] = new T[c];
            for (int j = 0; j < c; j++) {
                arr[i][j] = init;
            }
        }
    }
    ~Array2D() {
        for (int i = 0; i < r; i++) {
            delete[] arr[i];
        }
        delete[] arr;
    }
    Array2D<T>* operator*(Array2D<T>& other) {
        if (this->c != other.r) {
            return nullptr;
        }
        Array2D<T>* result = new Array2D<T>(this->r, other.c);
        for (int i = 0; i < this->r; i++) {
            for (int j = 0; j < other.c; j++) {
                result->arr[i][j] = 0;
                for (int k = 0; k < this->c; k++) {
                    result->arr[i][j] += this->arr[i][k] * other.arr[k][j];
                }
            }
        }
        return result;
    }
    T* operator[](int index) {
        return arr[index];
    }

    int getR() {return this->r;}
    int getC() {return this->c;}
    
    void disp() {
        for (int i = 0; i < this->r; i++) {
            for (int j = 0; j < this->c; j++) {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }
};