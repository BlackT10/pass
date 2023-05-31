/*
Viết chương trình đọc vào chuỗi s, tìm tất cả các chuỗi con trong s mà chuỗi con chỉ có duy nhất 1 kí tự 
(ví dụ : aaaa, bbbb, cc, ...) và trả về độ dài của chuỗi con dài nhất.
*/

#include <iostream>
#include <string>

using namespace std;

int main()  {
    // TODO
    string s;
    cin>>s;
    string tmp;
    int max=1;
    int count=1;
    for(int i=0; i<s.length();i++){
        if(s[i]==s[i-1] && s[i]!= ' '){
            count+=1;
            if(max < count) max=count;
        }
        else count = 1;
    }
    cout<<max;
}