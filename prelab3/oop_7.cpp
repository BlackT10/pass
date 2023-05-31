/*
Trong thân hàm main(), hãy viết chương trình chính tạo ra một mảng các đối tượng thuộc class Course có n phần tử 
(n được nhập từ người sử dụng – sử dụng kỹ thuật tạo mảng động bằng lệnh new). 
Sau đó nhập và hiển thị dữ liệu cho n đối tượng này bằng hai phương thức getinfo() và disinfo() đã được hiện thực sẵn.
*/

#include<iostream>

using namespace std;

class Course {
    private:
        int ID;
        int numOfStudent;
        int numOfTeacher;
        int numOfTA;
    public:
        void getinfo();
        void disinfo();
};

void Course::getinfo() {
   cout << "ID: ";
   cin >> ID;
   cout << "Number of Students: ";
   cin >> numOfStudent;
   cout << "Number of Teachers: ";
   cin >> numOfTeacher;
   cout << "Number of TAs: ";
   cin >> numOfTA;
}

void Course::disinfo()
{
   cout<<endl;
   cout<< "CourseID = "<< ID << endl;
   cout<< "Number of student = " << numOfStudent << endl;
   cout<< "Number of teacher = " << numOfTeacher << endl;
   cout<< "Number of TA = " << numOfTA<< endl;
}


int main() {
    //TODO
    int n;

    cin >> n;

    Course* courses = new Course[n];

    for (int i = 0; i < n; i++) {
        courses[i].getinfo();
    }

    for (int i = 0; i < n; i++) {
        courses[i].disinfo();
    }

    delete[] courses;

    return 0;
}