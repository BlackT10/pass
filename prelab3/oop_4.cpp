/*
Hãy thiết kế một class Integer với một biến private val dạng int, Class gồm các phương thức sau:

constructor nhận biến val ban đầu. 
setValue() để thay đổi giá trị biến val.
getValue() để lấy giá trị biến val.
*/

class Integer {
   private:
      int val;

   public:
      Integer(int v) {
         val = v;
      }

      void setValue(int v) {
         val = v;
      }

      int getValue() {
         return val;
      }
};