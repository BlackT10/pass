/*Viết hàm void studendGrading(string fileName) đọc một file đuôi txt, dòng đầu gồm 1 số nguyên dương N, N dòng theo sau mỗi dòng chứa 4 số thực lần lượt là điểm số của các môn NMĐT,  KTLT, DSA và PPL của N học sinh.

Điểm trung bình (ĐTB) của sinh viên sẽ là trung bình cộng của 4 cột điểm trên. Sinh viên sẽ được xếp loại dựa trên ĐTB như sau:

Loại A nếu ĐTB >= 8 và không có môn nào dưới 5.
Loại B nếu 8 > ĐTB >= 6.5 và không có môn nào dưới 5.
Loại C nếu 6.5 > ĐTB >= 5 và không có môn nào dưới 5
Loại D cho các trường hợp còn lại
Xác định số lượng sinh viên mỗi loại và xuất kết quả ra màn hình.

Đầu vào:

Biến "fileName" là tên file chứa chứa thông tin về điểm số của sinh viên.

Đầu ra:

Số lượng sinh viên mỗi loại được ghi ra màn hình.



Write a function void studendGrading(string fileName) that reads a txt file, the first line consists of a positive integer N, N lines follow each line containing 4 real numbers, respectively, the scores of the subjects NMDT, KTLT, DSA and PPL of N students.

The student's grade point average (GPA) will be the average of the above 4 score columns. Students will be graded based on the following scores:

Grade A if the test score is >= 8 and no subject is below 5.
Grade B if 8 > GPA >= 6.5 and no subject below 5.
Grade C if 6.5 > GPA >= 5 and no subject below 5.
Grade D for the remaining cases.
Determine the number of students of each category and output the results to the screen.

Input:

The variable "fileName" is the file name that contains information about the student's score.

Output:

The number of students in each category is recorded on the screen.*/
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void studentGrading(string fileName) {
    ifstream file(fileName);
    if (!file.is_open()) {
        cout << "Error: Could not open file" << endl;
        return;
    }
    int n;
    file >> n;
    int countA = 0, countB = 0, countC = 0, countD = 0;
    for (int i = 0; i < n; i++) {
        double NMDT, KTLT, DSA, PPL;
        file >> NMDT >> KTLT >> DSA >> PPL;
        double GPA = (NMDT + KTLT + DSA + PPL) / 4.0;
        if (GPA >= 8 && NMDT >= 5 && KTLT >= 5 && DSA >= 5 && PPL >= 5) {
            countA++;
        } else if (GPA >= 6.5 && NMDT >= 5 && KTLT >= 5 && DSA >= 5 && PPL >= 5) {
            countB++;
        } else if (GPA >= 5 && NMDT >= 5 && KTLT >= 5 && DSA >= 5 && PPL >= 5) {
            countC++;
        } else {
            countD++;
        }
    }
    cout << "Grade A: " << countA << endl;
    cout << "Grade B: " << countB << endl;
    cout << "Grade C: " << countC << endl;
    cout << "Grade D: " << countD << endl;
}

int main() {
    string fileName = "grades.txt";
    studentGrading(fileName);
    return 0;
}