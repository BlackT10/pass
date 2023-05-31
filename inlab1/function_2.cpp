#include <iostream>
#include <cstring>
#include  <cctype>
using namespace std;

/*
Một số tự nhiên n được gọi là đặc biệt khi và chỉ khi n là số nguyên tố và tổng các chữ số của n cũng là số nguyên tố. Viết hàm kiểm tra một số tự nhiên có đặc biệt hay không.

Đầu vào:
int n: số tự nhiên cần kiểm tra có phải số đặc biệt không

Đầu ra:
bool: trả về true nếu n là số đặc biệt, ngược lại trả về false
*/

int main(){
    int n;
    cin >> n;
    cout << isSpecialNumber(n);

   /* int n;
    cin >> n;
    cout << isSpecialNumber(n);
   */
}

bool prime( int n){
    if (n <= 1)
        return false;
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
 
    return true;
}

bool isSpecialNumber(int n) {
    // Write your code 
    int sum=0;
    string str = to_string(n);
    //cout<<str<<endl;
    //cout<<str.length()<<endl;
    int num[str.length()];
  for (int i = 0; i < str.length(); i++) {
   num[i]= int(str[i] - '0');
   //cout<<num[i]<<endl;
  }
  for (int i = 0; i < str.length(); i++) {
    sum+=num[i];
  }
  //cout<<sum<<endl;
  if(prime(sum) == 1 && prime(n) == 1) return true;
  else return false;
}