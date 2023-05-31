#include <iostream>
#include <string>

using namespace std;

/*
Hiện thực hàm void replaceString(string s, string s1, string s2) để in ra chuỗi s sau khi đã thay thế chuỗi con s1 cuối cùng thành s2 có trong s.

Nếu không tìm thấy chuỗi s1 thì giữ nguyên chuỗi s và in ra.
*/

int main(){
    string s = "Truong Dai Hoc Bach Khoa, Sai Gon";
    string s1 = "ai";
    string s2 = "ong";
    replaceString(s, s1, s2);
}

void replaceString(string s, string s1, string s2){
    //TO DO
    if(s.rfind(s1)<=s.length()){
        s.replace(s.rfind(s1),s1.length(),s2);
    }
    cout<<s<<endl;
}