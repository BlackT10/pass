/*[Tiếng Việt ]

Viết chương trình đọc vào chuỗi s từ bàn phím, tìm và trả về độ dài của chuỗi con dài nhất không có ký tự nào được lặp lại có trong s.

Đầu vào:

Chuỗi s.

Đầu ra:

Độ dài của chuỗi con dài nhất không có ký tự nào được lặp lại có trong s.



[English ]

Write a program read a string s from keyboard, find and return the length of the longest sub-string that doesn't have any repeated character in s.

Input:

String s.

Output:

Length of the longest sub-string that doesn't have any repeated character in s.*/




#include <iostream>
#include <string>

using namespace std;

int main()  {
    // TODO
    string s;
    cin>>s;
    int n = s.length();
    int max_len = 0;
    for (int i = 0; i < n; i++) {
        bool visited[256] = {false};
        for (int j = i; j < n; j++) {
            if (visited[int(s[j])] == true) {
                break;
            } else {
                max_len = max(max_len, j - i + 1);
                visited[int(s[j])] = true;
            }
        }
        visited[int(s[i])] = false;
    }
    cout<<max_len;
}