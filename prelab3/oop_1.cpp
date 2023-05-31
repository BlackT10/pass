/*
Cho định nghĩa class:

class ClockType
{
   public:
      ClockType();
      void setTime(int, int, int);
      void printTime() const;
   private:
      int hr;
      int min;
      int sec;
};
Cho câu lệnh:

myClock.setTime(5, 2, 30);
Trong câu lệnh myClock.setTime (5, 2, 30); phương thức setTime được thực thi. Các giá trị 5, 2 và 30 được chuyển dưới dạng tham số cho hàm setTime và hàm sử dụng các giá trị này để đặt giá trị của ba biến thành viên hr, min và sec của đối tượng myClock thành 5, 2 và 30, tương ứng.

Yêu cầu: SV hiện thực phương thức setTime để nó thực hiện được mô tả trên.

Lưu ý: hr, min, sec cần thoả mãn các điều kiện sau. Nếu tham số đầu vào không thoả mãn điều kiện bên dưới thì ta gán giá trị 0 cho biến thành viên tương ứng.

0 <= hr < 24
0 <= min < 60
0 <= sec < 60
*/

class ClockType
{
public:
    ClockType();
      
    void setTime(int, int, int);
    void printTime() const;

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
void ClockType::setTime(int hours, int minutes, int seconds)
{
    if (hours >= 0 && hours < 24)
        hr = hours;
    else
        hr = 0;
    if (minutes >= 0 && minutes < 60)
        min = minutes;
    else
        min = 0;
    if (seconds >= 0 && seconds < 60)
        sec = seconds;
    else
        sec = 0;
}