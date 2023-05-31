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

Chỉ số objClass của mỗi vật thể dị thường đánh giá mức độ khó khăn trong việc quản thúc đối tượng. Chỉ số này càng cao, đối tượng càng khó bị quản thúc, và việc quản thúc cần tiêu tốn nhiều tài nguyên hơn.

Hiện thực một hàm với prototype sau:

int compareObjectClass(const SCP &objA, const SCP &objB);

Hàm so sánh mức độ khó khăn trong việc quản thúc của hai đối tượng objA và objB và trả về -1 nếu objA dễ quản thúc hơn objB, 1 nếu objA khó quản thúc hơn objB, 0 nếu mức độ khó khăn trong việc quản thúc của hai vật thể này tương đương nhau.
*/
#include<iostream>
#include<string>

using namespace std;

struct SCP {
    int id;
    int objClass;
    string speConProcedures;
    string description;
    string* addendums;
    int numAddendums;
};

int compareObjectClass(const SCP &objA, const SCP &objB) {
    if (objA.objClass < objB.objClass) {
        return -1;
    } else if (objA.objClass > objB.objClass) {
        return 1;
    } else {
        return 0;
    }
}