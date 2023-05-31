#include <iostream>
#include <cstring>
#include  <cctype>
using namespace std;

/*
Viết hàm để mã hóa và giải mã một đoạn text theo phương pháp Caesar Cipher. 
Để mã hoá và giải mã một chuỗi ký tự text, ta cần một tham số có giá trị nguyên là 
shift.

Hàm mã hóa sẽ thay đổi từng chữ cái trong text bằng cách dịch chuyển chữ cái đó 
sang phải shift lần trong bảng chữ cái. Ví dụ với shift = 3. 
Khi đó 'a' được mã hoá thành 'd', 'b' được mã hoá thành 'e',... 'z' được mã hoá 
thành 'c'

Hàm giải mã sẽ nhận một chuỗi ký tự text và giá trị nguyên shift và giải mã 
chuỗi ký tự này thành chuỗi ban đầu (tức dịch chuyển từng chữ cái sang trái shift 
lần trong bảng chữ cái)
*/



int main(){
    
}

void encrypt(char* text, int shift) {
    // Write your code 
     string result = "";
    string newtext = text;
    size_t len = newtext.length();
    for (int i = 0; i < len; i++) {
        if (isupper(text[i]))
            result += char(int(text[i] + shift - 65) % 26 + 65);
        else
            result += char(int(text[i] + shift - 97) % 26 + 97);
    }
    for (int i = 0; i< len; i++){
        text[i] = result[i];
    }
}

void decrypt(char* text, int shift) {
    char ch;
    for(int i = 0; text[i] != '\0'; ++i){
        ch = text[i];
        if(ch >= 'a' && ch <= 'z'){
        ch = ch - shift;
        if(ch < 'a'){
        ch = ch + 'z' - 'a' + 1;
        }
        text[i] = ch;
        }
        else if(ch >= 'A' && ch <= 'Z'){
        ch = ch - shift;
        if(ch < 'A'){
        ch = ch + 'Z' - 'A' + 1;
        }
    text[i] = ch;
        }
    }
}