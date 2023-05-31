/*
Cho định nghĩa class:

class clockType
{
   public:
      void setTime(int, int, int);
      bool equalTime(const clockType&) const;
      clockType(int, int, int);
      clockType();
   private:
      int hr;
      int min;
      int sec;
};
Hãy xem xét câu lệnh: 

if (myClock.equalTime(yourClock)) 
cout << "Both times are equal." << endl;
else 
cout << "The two times are not equal." << endl;
Biểu thức kiểm tra điều kiện if-else so sánh myClock và yourClock. Nếu thời gian của 2 clock gồm (hr, min, sec) là giống nhau thì trả về true, ngược lại sẽ trả về false.

Yêu cầu: SV hiện thực phương thức equalTime để thực hiện như mô tả trên.

*/

class ClockType
{
public:
    void setTime(int, int, int);
    bool equalTime(const ClockType&) const;
    ClockType(int, int, int);
    ClockType();

private:
    int hr;
    int min;
    int sec;
};

// TODO
bool ClockType::equalTime(const ClockType& otherClock) const
{
    return (hr == otherClock.hr && min == otherClock.min && sec == otherClock.sec);
}
