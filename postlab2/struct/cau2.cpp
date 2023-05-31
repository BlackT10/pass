/*
Cho struct SCP lưu trữ thông tin các vật thể dị thường được mô tả như sau:

struct SCP {
    int id;
    int objClass;
    string speConProcedures;
    string description;
    string* addendums;
    int numAddendums;
};

Tổ chức SCP lưu trữ thông tin các vật thể dị thường dưới dạng một array được cấp phát động. Tuy nhiên, vì một vài lý do, các hồ sơ không được sắp xếp theo một trật tự nào.

Hiện thực một hàm với prototype sau:

SCP** sortDatabase(SCP** arr, int n);

Trong đó arr là một array chứa các pointer trỏ đến các instance kiểu SCP, n là độ dài của mảng. Hàm thực hiện sắp xếp theo chiều tăng dần mã định danh các đối tượng SCP và trả về mảng sau khi sắp xếp.
*/

#include<iostream>
#include<string>
#include <algorithm>

using namespace std;

struct SCP {
    int id;
    int objClass;
    string speConProcedures;
    string description;
    string* addendums;
    int numAddendums;
};

SCP** sortDatabase(SCP** arr, int n) {
    sort(arr, arr + n, [](SCP* a, SCP* b) {
        return a->id < b->id;
    });
    return arr;
}