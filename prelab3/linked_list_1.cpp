/*
Cho chương trình khởi tạo, trong đó:
- struct node: đại diện cho một node của linked list
- Hàm createLinkedList:
    + Nhận vào số phần tử (>0) của link list
    + Xây dựng một linked list với dữ liệu của các node được nhập từ đầu vào chuẩn (stdin), node mới được thêm vào CUỐI linked list
    + Trả về con trỏ đến node đầu tiên của linked list.
- Hàm isEqual so sánh hai linked list:
   + Nhận vào con trỏ head1 của linked list thứ nhất, con trỏ của một head2 của linked list thứ 2
   + Hàm trả về true khi và chỉ khi hai linked list có cùng chiều dài và giá trị của node ở vị trí tương ứng luôn bằng nhau. Ngược lại, hảm trả về false.
- Hàm main đọc vào số phần tử của linked list, gọi hàm createLinkedList để khởi tạo linked list, sau đó gọi hàm print để in ra các phần tử của linked list.
Bạn hãy hoàn thành hàm isEqual 
Đầu vào: 
Các giá trị nhập vào từ đầu vào chuẩn (stdin) đều có giá trị trong khoảng (0; 5000)
*/

#include <iostream>
using namespace std;
struct node
{
  int data;
  node *next;
};

node *createLinkedList(int n); // The implementation is provided implicitly

bool isEqual(node *head1, node *head2)
{
  // TO DO
 while (head1 != NULL && head2 != NULL) {
        if (head1->data != head2->data) {
            return false;
        }
        head1 = head1->next;
        head2 = head2->next;
    }
    if (head1 == NULL && head2 == NULL) {
        return true;
    } else {
        return false;
    }
}

int main()
{
  int n = 0;
  cin>> n;
  node *head1 = createLinkedList(n);
  int m = 0;
  cin>> m;
  node *head2 = createLinkedList(m);
  cout << isEqual(head1, head2) << endl;
  return 0;
}
