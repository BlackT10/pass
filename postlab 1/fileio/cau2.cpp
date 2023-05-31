/*Viết hàm void calMoney(string price, string buy) đọc vào 2 file price.txt và buy.txt.


Trong đó:

File price.txt chứa thông tin về các sản phẩm, gồm: Dòng đầu tiên chứa số nguyên dương N (N <= 20) là số lượng sản phẩm hiện có trong cửa hàng. N dòng tiếp theo mỗi dòng chứa 2 số nguyên dương là ID và giá của các sản phẩm tương ứng

     Ví dụ:

          3

          1 10

          2 15

          3 12

Có nghĩa là: hiện tại có 3 sản phẩm được bán trong cửa hàng, sản phẩm 1 giá 10 sản phẩm 2 giá 15 và sản phẩm 3 có giá là 12.

File buy.txt chứa thông tin về việc mua hàng hóa của khách hàng. Dòng đầu tiên chứa số nguyên dương M là số lượng khách hàng mua hàng trong 1 ngày. M dòng tiếp theo mỗi dòng chứa thông tin như sau: sẽ có  giá nhiều trị nằm trên một hàng, cách nhau bởi một khoảng trắng. Giá trị đầu tiên sẽ là tên khách hàng (dạng string), các giá trị còn lại sẽ đi theo cặp với nhau, tương ứng là: <ID sản phẩm>_<số lượng tương ứng>

     Ví dụ:

          2

          A 1 2 2 3

          B 1 3 3 2

Có nghĩa là có 2 khách hàng A và B, A mua 2 sản phẩm loại 1 và 3 sản phẩm loại 2; B mua 3 sản phẩm loại 1 và 2 sản phẩm loại 3.

Lưu ý: ID của sản phẩm và tên khách hàng là duy nhất (không lặp lại).

Tính số tiền mỗi khách hàng cần trả, sau đó xuất kết quả ra màn hình.

Đầu vào:

2 biến price (là tên của file chứa thông tin sản phẩm) và buy (là tên của file chứa thông tin mua hàng).

Đầu ra:

Số tiền mỗi khách hàng cần trả.



Write a function void calMoney(string price, string buy) that reads into 2 files price.txt and buy.txt.

In there:

The price.txt file contains information about products, including: The first line contains a positive integer N (N <= 20) which is the number of products currently in the store. The next N lines each contain 2 positive integers that are the IDs and prices of the respective products
     Example:

          3

          1 10

          2 15

          3 12

Meaning: currently there are 3 products for sale in the store, product 1 costs 10 products 2 costs 15 and product 3 costs 12.

The buy.txt file contains information about the customer's purchase of goods. The first line contains a positive integer M representing the number of purchases made in a day. The next M lines each contain the following information: there will be multiple values ​​in a row, separated by a space. The first value will be the customer name (in string form), the remaining values ​​will come in pairs, respectively: <product ID>_<corresponding quantity>


     Example:

          2

          A 1 2 2 3

          B 1 3 3 2

It means that there are 2 customers A and B, A buys 2 products of type 1 and 3 products of type 2; B buys 3 products of type 1 and 2 products of class 3.

Note: Product ID and customer name are unique (no repetition).

Calculate how much each customer needs to pay, then output the results to the screen.

Input:

2 variables "price" (the name of the file containing product information) and "buy" (the name of the file containing purchase information).

Output:

Amount each customer needs to pay.*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;



void calMoney(string price, string buy) {
    // TODO
    ifstream priceFile(price);
    if (!priceFile.is_open()) {
        cout << "Error: Could not open price file" << endl;
        return;
    }
    int n;
    priceFile >> n;
    int prices[1001] = {0};
    for (int i = 0; i < n; i++) {
        int id, cost;
        priceFile >> id >> cost;
        prices[id] = cost;
    }
    priceFile.close();

    ifstream buyFile(buy);
    if (!buyFile.is_open()) {
        cout << "Error: Could not open buy file" << endl;
        return;
    }
    int m;
    buyFile >> m;
    string line;
    getline(buyFile, line);
    for (int i = 0; i < m; i++) {
        getline(buyFile, line);
        int total = 0;
        string name = "";
        int j = 0;
        while (line[j] != ' ') {
            name += line[j];
            j++;
        }
        j++;
        while (j < line.size()) {
            string id_str = "";
            while (line[j] != ' ') {
                id_str += line[j];
                j++;
            }
            j++;
            string quantity_str = "";
            while (j < line.size() && line[j] != ' ') {
                quantity_str += line[j];
                j++;
            }
            j++;
            int id = stoi(id_str);
            int quantity = stoi(quantity_str);
            total += prices[id] * quantity;
        }
        cout << name << " " << total << endl;
    }
    buyFile.close();
}

int main(){
    string price = "price.txt";
    string buy = "buy.txt";
    calMoney(price, buy);
    return 0;
}