
#include <iostream>
#include <cstring>
#include  <cctype>
using namespace std;

/*
Hiện thực hàm deleteWord(string s, string s1) với chức năng in ra chuỗi s sau khi xóa tất cả các chuỗi s1 có trong s.
*/

void deleteWord(string s, string s1);

int main() {
    string s = "Truong Dai Hoc Bach Khoa, Sai Gon";
    string s1 = "ai ";
    deleteWord(s, s1);
}

void deleteWord(string s, string s1){
    //TO DO
    int position = s.find(s1);
    if( position <= s.length() ){
        s.erase( position, s1.length() ) ;
        deleteWord(s, s1);
    }
    else cout<<s<<endl;
}