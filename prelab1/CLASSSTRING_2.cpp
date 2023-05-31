#include <iostream>
#include <cstring>
using namespace std;

/*
Hiện thực hàm findAllIndex(string s1, string s2) để in ra tất cả các vị trí xuất hiện của kí tự đầu tiên của chuỗi s2 trong chuỗi s1. 
Nếu không tìm thấy in ra -1. 
Các vị trí tìm thấy sẽ cách nhau một khoảng trắng, sau vị trí cuối cùng, không in thêm bất kỳ ký tự nào (kể cả khoảng trắng, dấu xuống hàng)
*/

void findAllIndex(string s1, string s2);

int main(){
    string s1 = "Truong Dai Hoc Bach Khoa.";
    string s2 = "a";
    findAllIndex(s1, s2);
}

void findAllIndex(string s1, string s2){
    // TO DO
    int count = 0;
    for(int i=0;i<s1.length();i++){
        if(s2[0] == s1[i]){
            cout<<i<<" ";
            count++;
        }
    }
    if(count == 0){
        cout<<"-1";
    }
}