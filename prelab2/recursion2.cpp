/*
Cho một chuỗi, hiện thực hàm 

int strLen(char* str){} 
để tính độ dài của chuỗi sử dụng đệ quy.

Lưu ý không được sử dụng các từ khóa như for, while, goto 
(thậm chí là tên biến, comment).
*/

#include <iostream>
using namespace std;

int strLen(char* str)     
{ 
    /*  
     * STUDENT ANSWER
     */
     if(*(str+0) == 0){
         return 0;
     }
     return strLen(str+1)+1;
}

int main (){
    char str[] = "Truong DH Bach Khoa";
    cout << strLen(str);
}