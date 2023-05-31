#include <iostream>
#include <cstring>
#include  <cctype>
using namespace std;
 /*
 Một chuỗi được gọi là palindrome nếu chuỗi đó giống với chuỗi được đảo ngược từ chính nó. Ví dụ: “eye”, “noon”, “abcba”...

Hãy viết hàm kiểm tra xem một chuỗi có là palindrome hay không?
 */

int main(){
    const char* str = "abba";
    cout << isPalindrome(str);

    const char* str = "axz";
    cout << isPalindrome(str);
}

bool isPalindrome(const char* str) {
    // Write your code here
      int flag = 0;
   string s = str;
   size_t len = s.length();
    for (int i = 0; i <= len / 2 ; i++) {
        if (str[i] != str[len - i - 1]) {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
        return false;
    else
        return true;
}