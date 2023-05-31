/*
Thực hiện các yêu cầu sau:

Xây dựng một class Integer gồm một thành phần private tên là val là một số nguyên kiểu int. 
Hiện thực constructor: Integer(int).
Hiện thực constructor: Integer(Integer*).
Quá tải toán tử operator + để phép tính Integer(2) + Integer(3)  trả về Integer(5).
Quá tải toán tử operator + để phép tính Integer(3) + 2 trả về Integer(5).
Chú ý: khai báo phương thức print() trong định nghĩa của class và không cần hiện thực.
*/

#include<iostream>
using namespace std;

// TODO
class Integer {
private:
    int val;
public:
    Integer(int v) : val(v) {}
    Integer(Integer* p) : val(p->val) {}
    void print();
    Integer operator+(const Integer& other) const {
        return Integer(this->val + other.val);
    }
    Integer operator+(int n) const {
        return Integer(this->val + n);
    }
};

void Integer::print() {
    cout << this->val << endl;
}

int main() {
    int x, y, z;
    cin >> x >> y >> z;
    Integer a(x);
    Integer b(y);
    Integer* t = new Integer(z);
    Integer c(t);
    
    a.print(); b.print();
    (a + b + c + 4).print();
    
    delete t;
    return 0;
}