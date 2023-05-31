/*Viết chương trình đọc vào chuỗi s từ bàn phím, tìm và trả về chuỗi con có tính chất đối xứng dài nhất có trong s.

Đầu vào:

Chuỗi s.

Đầu ra:

Chuỗi con có tính chất đối xứng dài nhất có trong s. Trong trường hợp có nhiều chuỗi con dài nhất có cùng độ dài, trả về chuỗi con có vị trí bắt đầu nhỏ nhất.


[English ]

Write a program read an s string from keyboard, find and return the longest symetrical sub-string of s.

Input:

String s.

Output:

The longest symmetrical sub-string from s. In case where there are more than one highest string, return the string with the smallest starting character index.*/
#include <iostream>
#include <string>

using namespace std;

int main()  {
    // TODO
    string s;
    cin>>s;
    int n = s.length();
    int max_len = 1;
    int start = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            int flag = 1;
            for (int k = 0; k <= ((j - i) / 2); k++) {
                if (s[i + k] != s[j - k]) {
                    flag = 0;
                }
            }
            if (flag != 0 && (j - i + 1) > max_len) {
                start = i;
                max_len = j - i + 1;
            }
        }
    }
    cout<<s.substr(start, max_len);
}