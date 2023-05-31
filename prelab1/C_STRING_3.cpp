#include <iostream>
#include <cstring>
using namespace std;

/*
Viết hàm int calc(char str[]) trả về giá trị dạng thập phân của chuỗi các bit nhị phân

- Đầu vào:
Mảng kí tự chứa chuỗi

- Đầu ra:
Giá trị dạng thập phân của chuỗi các bit nhị phân

*/

int calc(char str[]);

int main(){
    char str[] = "001011" ;
    cout << calc(str);
}

int calc(char str[]) {
    // TODO
    int res = 0;
    for(int i=0;i<strlen(str);i++){
        if(str[i] == '1'){
            res = res + 1;
        }
        if(i != strlen(str)-1){
            res = res*2;
        }
    }
    return res;
}