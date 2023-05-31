/*
Cho chương trình khởi tạo, trong đó:
- struct node: đại diện cho một node của linked list
- Hàm print: nhận vào con trỏ head của linked list và in ra từng phần tử của linked list
- Hàm createLinkedList:
    + Nhận vào số phần tử (>0) của link list
    + Xây dựng một linked list với dữ liệu của các node được nhập từ đầu vào chuẩn (stdin), node mới được thêm vào CUỐI linked list
    + Trả về con trỏ đến node đầu tiên của linked list.
- Hàm insertNode
    + Nhận vào con trỏ head của linked list, con trỏ của một node mới, và vị trí position
    + Hàm sẽ chèn node mới này vào vị trí position (lấy vị trí của node head là 1). Nếu position <=0, hàm không làm gì cả. Nếu position lớn hơn số phần tử hiện tại của linked list thì node mới được chèn vào cuối của linked list.
- Hàm main đọc vào số phần tử của linked list, gọi hàm createLinkedList để khởi tạo linked list, sau đó gọi hàm print để in ra các phần tử của linked list.
Bạn hãy hoàn thành hàm insertNode
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

node *createLinkedList(int n)
{
    node* head = NULL;
    node* tail = NULL;

    for (int i = 0; i < n; i++) {
        int data;
        cin >> data;

        node* newNode = new node;
        newNode->data = data;
        newNode->next = NULL;

        if (tail == NULL) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    return head;
}

node *insertNode(node *head, node *newNode, int position)
{
  // TO DO
   // If position is less than or equal to 0, do nothing and return the head
    if (position <= 0) {
        return head;
    }
    
    // If the list is empty or position is 1, insert the node at the beginning
    if (head == nullptr || position == 1) {
        newNode->next = head;
        return newNode;
    }
    
    // Traverse the list to find the node at the previous position
    node* prev = head;
    int count = 1;
    while (prev->next != nullptr && count < position - 1) {
        prev = prev->next;
        count++;
    }
    
    // Insert the node after the previous node
    newNode->next = prev->next;
    prev->next = newNode;
    
    return head;
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
  node *newNode = new node();
  cin >> newNode->data;
  int position = 0;
  cin >> position;
  head = insertNode(head, newNode, position);
  print(head);
  return 0;
}