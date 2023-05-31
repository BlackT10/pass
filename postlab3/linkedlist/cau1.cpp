/*
Cho chương trình khởi tạo, trong đó:
- struct node: đại diện cho một node của linked list
- Hàm print: nhận vào con trỏ head của linked list và in ra từng phần tử của linked list
- Hàm createLinkedList:
    + Nhận vào số phần tử (>0) của link list
    + Xây dựng một linked list với dữ liệu của các node được nhập từ đầu vào chuẩn (stdin), node mới được thêm vào CUỐI linked list
    + Trả về con trỏ đến node đầu tiên của linked list.
- Hàm evenThenOddLinkedList:
    + Nhận vào con trỏ head của linked list
    + Hám có tác vụ thay đổi Linked List đầu vào, sao cho các phần tử có giá trị chẵn nằm ở đầu linked list và các phần tử có giá trị lẻ nằm
ở phía sau. Hơn nữa, thứ tự của các giá trị chẵn và lẻ này không thay đổi so với Linked List đầu vào
- Hàm main đọc vào số phần tử của linked list, gọi hàm createLinkedList để khởi tạo linked list, sau đó gọi hàm print để in ra các phần tử của linked list.
Bạn hãy hoàn thành hàm evenThenOddLinkedList
Đầu vào:
Tất cả giá trị từ đầu vào chuẩn (stdin) đều có giá trị trong khoảng (0; 5000)
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

node* evenThenOddLinkedList(node *head)
{
    // TO DO
    node *even = nullptr;
    node *odd = nullptr;
    node *evenTail = nullptr;
    node *oddTail = nullptr;

    while (head != nullptr)
    {
        if (head->data % 2 == 0)
        {
            if (even == nullptr)
            {
                even = head;
                evenTail = head;
            }
            else
            {
                evenTail->next = head;
                evenTail = evenTail->next;
            }
        }
        else
        {
            if (odd == nullptr)
            {
                odd = head;
                oddTail = head;
            }
            else
            {
                oddTail->next = head;
                oddTail = oddTail->next;
            }
        }

        head = head->next;
    }

    if (even == nullptr)
    {
        return odd;
    }

    evenTail->next = odd;

    if (odd != nullptr)
    {
        oddTail->next = nullptr;
    }

    return even;
}
void print(node *head)
{
  while (head != nullptr)
  {
    cout << head->data << " ";
    head = head->next;
  }
  cout<<endl;
}
int main()
{
  int n = 0;
  cin >> n;
  node *head = createLinkedList(n);
  print(head);
  head = evenThenOddLinkedList(head);
  print(head);
  return 0;
}