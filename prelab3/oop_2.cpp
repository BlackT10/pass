/*
Hãy thiết kế một class Room với constructor gồm 3 biến length, breadth, height (theo thứ tự). Hiện thực các phương thức sau cho class Room:

Constructor: đầu vào lần lượt là length, breadth, height
calculateArea: tính diện tích của căn phòng.
calculateVolume: tính thể tích của căn phòng
*/

class Room {
   public:
      double length;
      double breadth;
      double height;

      Room(double l, double b, double h) {
         length = l;
         breadth = b;
         height = h;
      }

      double calculateArea() {
         return length * breadth;
      }

      double calculateVolume() {
         return length * breadth * height;
      }
};