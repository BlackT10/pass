#include <iostream>
#include <cstring>
using namespace std;

/*
Viết hàm void process(const char str[], char outstr[]) đảo ngược các ký tự trong chuỗi. 

- Đầu vào:
Mảng kí tự chứa chuỗi cần đảo ngược

- Đầu ra:
Kết quả của bài toán được ghi vào chuỗi outstr

*/

void process(const char *str, char *outstr);

int main(){
    const int MAX_SIZE = 100;
    char str[] = "this is my school" ;
    char outstr[MAX_SIZE];
    process(str, outstr);
    cout << outstr;
}

void process(const char *str, char *outstr) {
    // TODO
    size_t i;
    size_t length = strlen(str);
    for(i = 0; i < length; i++){
    outstr[i] = str[length-i-1];
    }
    outstr[i] = '\0';
}