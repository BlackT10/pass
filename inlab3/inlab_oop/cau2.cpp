/*
Cho class ClockType như sau:

class ClockType
{
   public:
      void printTime() const;
      void incrementSeconds();
      void incrementMinutes();
      void incrementHours();
      clockType(int, int, int);
      clockType();
   private:
      int hr;
      int min;
      int sec;
};

Hãy xem xét câu lệnh: 

myClock.incrementSeconds();

Câu lệnh này tăng biến sec thêm 1 đơn vị.

Hãy hiện thực 3 phương thức 

incrementHours: tăng hr thêm 1 đơn vị. Sau khi tăng, nếu hr = 24 thì ta đặt lại hr = 0.
incrementMinutes: tăng min thêm 1 đơn vị. Sau khi tăng, nếu min = 60 thì ta đặt lại min = 0 và tăng hr thêm 1 đơn vị bằng cách phù hợp.
incrementSeconds: tăng sec thêm 1 đơn vị. Sau khi tăng, nếu sec = 60 thì ta đặt lại sec = 0 và tăng min thêm 1 đơn vị bằng cách phù hợp.
*/

class ClockType
{
   public:
      void setTime(int, int, int);
      void printTime() const;
      void incrementSeconds();
      void incrementMinutes();
      void incrementHours();
      ClockType(int, int, int);
      ClockType();

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
void ClockType::incrementHours() {
hr++;
if (hr == 24) {
hr = 0;
}
}

void ClockType::incrementMinutes() {
min++;
if (min == 60) {
min = 0;
incrementHours();
}
}

void ClockType::incrementSeconds() {
sec++;
if (sec == 60) {
sec = 0;
incrementMinutes();
}
}
