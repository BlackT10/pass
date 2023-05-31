#include <iostream>
#include <cstring>
using namespace std;

/*
Hiện thực hàm cutString(string s, int index) để in ra chuỗi con của chuỗi s từ vị trí index đến hết (index tính từ 0).
*/

void cutString(string s, int index);

int main(){
    string s = "Truong Dai Hoc Bach Khoa.";
    cutString(s, 7);
}

void cutString(string s, int index){
    // TO DO
    string r = s.substr(index,s.length());
	cout<<r;
}