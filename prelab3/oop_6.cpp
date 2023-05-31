/*
Trong câu lệnh myClock.getTime(hours, minutes, seconds); hàm thành viên getTime được thực thi. Các giá trị hr, min và sec của myClock được hàm sử dụng để cài đặt giá trị của ba biến hours, minutes, seconds tương ứng.

Yêu cầu: SV hiện thực phương thức getTime để thực hiện được mô tả như trên.

Lưu ý: hr, min, sec cần thoả mãn các điều kiện sau. Nếu tham số đầu vào không thoả mãn điều kiện bên dưới thì ta gán giá trị 0 cho biến thành viên tương ứng.

0 <= hr < 24
0 <= min < 60
0 <= sec < 60
*/

class ClockType
{
public:
    ClockType(int, int, int);
    ClockType();    
    void printTime() const;
    void setTime(int, int, int);
    
    void getTime(int&, int&, int&) const;
    

private:
    int hr;
    int min;
    int sec;
};

void ClockType::printTime() const
{
   if (hr < 10)
      cout << "0";
   cout << hr << ":";
   if (min < 10)
      cout << "0";
   cout << min << ":";
   if (sec < 10)
      cout << "0";
   cout << sec;
}

// TODO
void ClockType::getTime(int& hours, int& minutes, int& seconds) const
{
    hours = hr;
    minutes = min;
    seconds = sec;
}
