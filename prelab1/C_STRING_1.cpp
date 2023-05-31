#include <iostream>
#include <cstring>
using namespace std;

/*
Viết hàm void process(const char str[], char outstr[]) loại bỏ các khoảng trắng thừa trong chuỗi sao cho 
không còn hai khoảng trắng liền kề nhau và không có khoảng trắng nào ở đầu và cuối chuỗi.
*/

void process(char str[], char outstr[]);

int main(){
    const int MAX_SIZE = 100;
    char str[] = "  abc  def  ghi  " ;
    char outstr[MAX_SIZE];
    process(str, outstr);
    cout << outstr;
}

void process(char str[], char outstr[]) {
    // TODO
    while (str[0] == ' '){
        strcpy(&str[0], &str[1]);
    }
    for(int i = 0; i< strlen(str)-1; i++){
        if (str[i] == ' ' && str[i+1] == ' '){
            strcpy(&str[i], &str[i+1]);
            i--;
        }
    }
    while (str[strlen(str)-1] == ' '){
        strcpy(&str[strlen(str)-1], &str[strlen(str)]);
    }
    int i;
    for(i=0; i<strlen(str);i++){
        outstr[i]=str[i];
    }
    outstr[i] = '\0';
}