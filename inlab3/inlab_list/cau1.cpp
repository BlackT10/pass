/*
Cho chương trình khởi tạo, trong đó:
- struct node: đại diện cho một node của linked list
- Hàm print: nhận vào con trỏ head của linked list và in ra từng phần tử của linked list
- Hàm createLinkedList:
    + Nhận vào số phần tử (>0) của link list
    + Xây dựng một linked list với dữ liệu của các node được nhập từ đầu vào chuẩn (stdin), node mới được thêm vào CUỐI linked list
    + Trả về con trỏ đến node đầu tiên của linked list.
- Hàm main đọc vào số phần tử của linked list, gọi hàm createLinkedList để khởi tạo linked list, sau đó gọi hàm print để in ra các phần tử của linked list.
Bạn hãy hoàn thành hàm createLinkedList
Đầu vào:
Số n là số lượng phần tử trong linked list (0 < n < 5000)
n số tiếp theo là giá trị của mỗi node trong linked list, giá trị là một số nguyên có giá trị trong khoảng (-5000; 5000)
Đầu ra:
Thỏa yêu cầu bài toán
*/

#include <iostream>
using namespace std;

struct node {
    int value;
    node* next;
};

node* createLinkedList(int size) {
    node* head = NULL;
    node* tail = NULL;
    for (int i = 0; i < size; i++) {
        int value;
        cin >> value;
        node* newNode = new node;
        newNode->data = value;
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

void print(node* head) {
    node* curr = head;
    while (curr != NULL) {
        cout << curr->value << " ";
        curr = curr->next;
    }
    cout << endl;
}

int main() {
    int size;
    cin >> size;

    node* head = createLinkedList(size);
    print(head);

    return 0;
}