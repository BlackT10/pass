/*
Cho chương trình khởi tạo, trong đó:
- struct node: đại diện cho một node của linked list
- Hàm print: nhận vào con trỏ head của linked list và in ra từng phần tử của linked list
- Hàm createLinkedList:
    + Nhận vào số phần tử (>0) của link list
    + Xây dựng một linked list với dữ liệu của các node được nhập từ đầu vào chuẩn (stdin), node mới được thêm vào CUỐI linked list
    + Trả về con trỏ đến node đầu tiên của linked list.
- Hàm replace:
    + Nhận vào con trỏ head của linked list
    + Vị trí position muốn thay thế (tính từ index 0)
    + Giá trị value
    + Hàm replace sẽ thay thế giá trị tại vị trí position bằng giá trị value. Nếu position lớn hơn hoặc bằng số lượng node hoặc position âm thì hàm replace không làm gì cả.
- Hàm main đọc vào số phần tử của linked list, gọi hàm createLinkedList để khởi tạo linked list, sau đó gọi hàm print để in ra các phần tử của linked list.
Bạn hãy hoàn thành hàm replace
Đầu vào:
Tất cả giá trị từ đầu vào chuẩn (stdin) đều nằm trong khoảng (0, 5000). Riêng giá trị của position có thể âm
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

node *createLinkedList(int n)
{
    node* head = nullptr;
    node* tail = nullptr;
    for (int i = 0; i < n; i++) {
        int value;
        cin >> value;
        node* new_node = new node{ value, nullptr };
        if (tail == nullptr) {
            head = new_node;
            tail = new_node;
        } else {
            tail->next = new_node;
            tail = new_node;
        }
    }
    return head;
}

void replace(node* head, int position, int value)
{
    if (position < 0) {
        return;
    }
    for (int i = 0; i < position && head != nullptr; i++) {
        head = head->next;
    }
    if (head != nullptr) {
        head->data = value;
    }
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
  int pos, val;
  cin>>pos>>val;
  replace(head, pos, val);
  print(head);
  return 0;
}
