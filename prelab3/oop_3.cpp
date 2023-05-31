/*
Hãy xem xét câu lệnh: 

ClockType myClock (5, 12, 40);

Câu lệnh này khai báo một đối tượng myClock thuộc class ClockType. Ở đây, chúng ta đang truyền ba giá trị kiểu int, giá trị này khớp với kiểu của các tham số chính thức của hàm tạo với một tham số.

Xem xét đoạn code cho trước trong phần trả lời, chú ý đến hàm khởi tạo có 3 tham số. Hãy hiện thực hàm này để sau khi gọi câu lệnh khai báo trên, 3 biến thành viên được lần lượt đặt thành 5, 12, 40.
Hiện thực hàm khởi tạo với không tham số, hàm sẽ gán giá trị 0 cho 3 biến thành viên.
Lưu ý: hr, min, sec cần thoả mãn các điều kiện sau. Nếu tham số đầu vào không thoả mãn điều kiện bên dưới thì ta gán giá trị 0 cho biến thành viên tương ứng.
0 <= hr < 24
0 <= min < 60
0 <= sec < 60
*/

class ClockType
{
   public:
      ClockType(int, int, int); //constructor with parameters
      ClockType(); //default constructor
      
      void printTime() const;

   private:
      int hr;
      int min;
      int sec;
};

void ClockType::printTime() const { 
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

//TODO
ClockType::ClockType(int hour, int minute, int second) {
    if (hour >= 0 && hour < 24) {
        hr = hour;
    } else {
        hr = 0;
    }
    if (minute >= 0 && minute < 60) {
        min = minute;
    } else {
        min = 0;
    }
    if (second >= 0 && second < 60) {
        sec = second;
    } else {
        sec = 0;
    }
};
ClockType::ClockType() {
  hr = 0;
  min = 0;
  sec = 0;
};