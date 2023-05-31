/*
Cho chương trình khởi tạo, trong đó:
- struct node: đại diện cho một node của linked list
- Hàm print: nhận vào con trỏ head của linked list và in ra từng phần tử của linked list
- Hàm createLinkedList:
    + Nhận vào số phần tử (>0) của link list
    + Xây dựng một linked list với dữ liệu của các node được nhập từ đầu vào chuẩn (stdin), node mới được thêm vào CUỐI linked list
    + Trả về con trỏ đến node đầu tiên của linked list.
- Hàm searchLinkedList: 
    + Nhận vào con trỏ head của linked list
    + Giá trị cần tìm
    + Nếu tìm thấy thì trả về vị trí đầu tiên của nó trong Linked List (index từ 0), không thì trả về -1.
- hàm main đọc vào số phần tử của linked list, gọi hàm createLinkedList để khởi tạo linked list, sau đó gọi hàm print để in ra các phần tử của linked list.
Bạn hãy hoàn thành hàm searchLinkedList
Đầu vào:
Các giá trị từ đầu vào chuẩn đều có giá trị trong khoảng từ (0; 5000)
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
    node* head = NULL;
    node* tail = NULL;
    for (int i = 0; i < n; i++) {
        node* newNode = new node();
        cin >> newNode->data;
        newNode->next = NULL;
        if (head == NULL) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }
    return head;
}

int searchLinkedList(node* head, int key)
{
  // TODO
  int pos = 0;
    while (head != NULL) {
        if (head->data ==key) {
            return pos;
        }
        head = head->next;
        pos++;
    }
    return -1;
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
  int m;
  cin>>m;
  cout<<searchLinkedList(head,m);
  return 0;
}