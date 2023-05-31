/*
Kho lưu trữ của tổ chức SCP chứa hàng loạt các vật thể dị thường. 
Mỗi vật thể dị thường được lưu trữ dưới struct SCP với các thông tin như sau:

id: kiểu int, là mã định danh (hay mã vật thể), phân biệt giữa các vật thể với nhau.

objClass: kiểu int, là phân loại của vật thể đó.

speConProcedures: kiểu string, mô tả quy trình quản thúc đặc biệt của vật thể đó.

description: kiểu string, mô tả về các đặc điểm của vật thể đó.

addendums: kiểu string*, là một tập hợp của các phụ lục đính kèm, mô tả các 
            thông tin bổ sung cho vật thể đó.

numAddendums: kiểu int, là số lượng phụ lục đính kèm.

Hiện thực struct SCP với các yêu cầu trên.

Ghi chú: (Các) thư viện iostream và string đã được khai báo, và namespace std đã \
được sử dụng.
*/

#include <iostream>
#include <string.h>
using namespace std;

struct SCP {
    // Student answer
    int id;
    int objClass;
    string speConProcedures;
    string description;
    string* addendums;
    int numAddendums;
};