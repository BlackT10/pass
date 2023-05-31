/*
Xây dựng một class Coordinate có hai thành phần là x và y (kiểu float) là hai tọa độ trong hệ tọa độ Oxy. 

Hiện thực constructor nhận vào hai số x, y lần lượt và gán giá trị cho thành phần x, y tương ứng.
Hiện thực phương thức setX(), setY(), getX(), getY() cho class này. Sinh viên chọn kiểu trả về phù hợp.
Hiện thực phương thức distanceTo(Coordinate&) để tính khoảng cách Manhattan từ tọa độ này đến tọa độ được truyền vào. (Khoảng cách Manhattan được tính theo: d = abs(x1 – x2) + abs(y1 - y2))
*/

#include <iostream>

using namespace std;

//TODO
class Coordinate {
public:
    Coordinate(float x, float y) : x(x), y(y) {}
    void setX(float x) { this->x = x; }
    void setY(float y) { this->y = y; }
    float getX() const { return x; }
    float getY() const { return y; }
    float distanceTo(const Coordinate& other) const {
        return abs(x - other.x) + abs(y - other.y);
    }
private:
    float x;
    float y;
};

int main () {
    float Xa, Xb, Ya, Yb;
    cin >> Xa >> Xb >> Ya >> Yb;
    Coordinate a(1,2);
    Coordinate b(0,1);
    cout << a.distanceTo(b) << endl;
    a.setX(Xa); a.setY(Ya);
    b.setX(Xb); b.setY(Yb);
    cout << abs(a.getX() - b.getX()) + abs(a.getY() - b.getY()) << endl;
    cout << a.distanceTo(b) << endl;
    cout << abs(Xa - Xb) + abs(Ya - Yb);
    return 0;
}