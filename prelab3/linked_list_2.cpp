/*
Cho chương trình khởi tạo, trong đó:
- struct node: đại diện cho một node của linked list
- Hàm print: nhận vào con trỏ head của linked list và in ra từng phần tử của linked list
- Hàm createLinkedList:
    + Nhận vào số phần tử (>0) của link list
    + Xây dựng một linked list với dữ liệu của các node được nhập từ đầu vào chuẩn (stdin), node mới được thêm vào CUỐI linked list
    + Trả về con trỏ đến node đầu tiên của linked list.
- Hàm countNode:
    + Nhận đầu vào là con trỏ head của linked list
    + Trả về số lượng nodes trong linked list
- Hàm main đọc vào số phần tử của linked list, gọi hàm createLinkedList để khởi tạo linked list, sau đó gọi hàm print để in ra các phần tử của linked list.
Bạn hãy hoàn thành hàm countNode
Đầu vào:
Số n là số lượng phần tử trong linked list (0 < n < 5000)
n số tiếp theo là giá trị của mỗi node trong linked list, giá trị là một số nguyên có giá trị trong khoảng (-5000; 5000)
Đầu ra:
Thỏa yêu cầu bài toán
*/

#include <iostream>
using namespace std;
struct node
{
  int data;
  node *next;
};

node *createLinkedList(int n); // The implementation is provided implicitly

int countNode(node* head)
{
  //TODO
  int count = 0;
    while (head != NULL) {
        count++;
        head = head->next;
    }
    return count;
}

void print(node *head)
{
  while (head != nullptr)
  {
    cout << head->data << endl;
    head = head->next;
  }
}
int main()
{
  int n = 0;
  cin >> n;
  node *head = createLinkedList(n);
  print(head);
  cout<<endl;
  cout<<countNode(head);
  return 0;
}
