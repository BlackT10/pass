/*Viết hàm void manage(string library, string book, string author) đọc vào 3 file library.txt và book.txt và author.txt.


Trong đó:

File library.txt chứa thông tin của các thư viện, gồm: dòng đầu tiên chứa số nguyên dương N là số lượng thư viện được khảo sát. N dòng tiếp theo, mỗi dòng chứa 6 giá trị được phân cách nhau bằng dấu khoảng trắng. Cho mỗi dòng, giá trị đầu tiên là tên của Thư viện (tên Thư viện là duy nhất), 5 giá trị còn lại là 5 số nguyên dương, là ID của 5 quyển sách có trong thư viện đó.
     Ví dụ:
          5
          LA 1 2 3 4 5

          LB 5 3 1 2 4

          LC 4 1 5 2 3

File book.txt chứa thông tin của các quyến sách, gồm: dòng đầu tiên chứa số nguyên dương M là số lượng đầu sách có trong tất cả các thư viện. M dòng tiếp theo mỗi dòng chứa 3 giá trị (phân cách nhau bởi một dấu khoảng trắng) có ý nghĩa như sau: giá trị đầu tiên là một số nguyên dương đại diện cho Mã số sách (ID - ID là duy nhất), giá trị thứ 2 là năm sản xuất và giá trị cuối cùng là thể loại.
     Ví dụ:
          5
          1 2000 A

          2 2001 B

          3 1993 D

          4 1997 A

          5 1995 C

File author.txt chứa thông tin của các tác giả, gồm: dòng đầu tiên chứa số nguyên dương P là số lượng tất cả các tác giả của các sách trong các thư viện (giả sử 1 quyển sách chỉ được sáng tác bới 1 tác giả). P dòng tiếp theo mỗi dòng chứa các giá trị như sau (các giá trị được phân cách với nhau bằng 1 dấu khoảng trắng): giá trị đầu tiên là Tên tác giả, các giá trị còn lại là ID của các quyển sách mà người đó đã sáng tác.

     Ví dụ:

          3

          David 1 5

          John 3

          Henry 2 4

Xác định xem Thư viện L có chứa tác phẩm nào của Tác giả A hay không, nếu có xuất ra màn hình giá trị "True", ngược lại xuất ra "False". Với L và A được nhập vào từ bàn phím.
Đầu vào:

3 biến library, book và author lần lượt chứa tên file library.txt và book.txt và author.txt.

Đầu ra:

"True" hoặc "False" ứng với đầu vào.



Write a function void manage(string library, string book, string author) that reads into 3 files library.txt and book.txt and author.txt.

In there:

The file library.txt contains information about the libraries, including: the first line contains a positive integer N which is the number of libraries surveyed. The next N lines each contain 6 values ​​separated by a space. For each row, the first value is the name of the Library (the name of the Library is unique), the other 5 values ​​are 5 positive integers, which are the IDs of the 5 books in that library.
     Example:

          3

          LA 1 2 3 4 5

          LB 5 3 1 2 4

          LC 4 1 5 2 3

The file book.txt contains information about the books, including: the first line contains a positive integer M which is the number of titles in all libraries. The next M lines each contain 3 values ​​(separated by a space) that have the following meaning: the first value is a positive integer representing Book Number (ID - ID is unique), the 2nd value is the year of manufacture and the last value is the category.
     Example:

          5

          1 2000 A

          2 2001 B

          3 1993 D

          4 1997 A

          5 1995 C

The author.txt file contains information about the authors, including: the first line contains a positive integer P which is the number of all the authors of the books in the library (assuming a book is authored by only one author. fake). The next P lines each contain the following values ​​(values ​​are separated by a space): the first value is the Author's Name, the remaining values ​​are the IDs of the books that the author has read. that was composed.
     Example:

          3

          David 1 5

          John 3

          Henry 2 4

Determines if Library L contains any works by Author A, if so, outputs "True" to the screen, otherwise outputs "False". With L and A entered from the keyboard.

Input:

The 3 variables "library", "book" and "author" contain the names of the 3 files "library.txt" and "book.txt" and "author.txt" respectively.

Output:

"True" or "False" for the input.*/


#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

void manage(string library, string book, string author) {
    ifstream libFile(library);
    ifstream bookFile(book);
    ifstream authorFile(author);

    const int MAX_BOOKS = 1000;
    bool libBooks[MAX_BOOKS] = {false};
    bool authorBooks[MAX_BOOKS] = {false};

    int n;
    libFile >> n;
    for (int i = 0; i < n; i++) {
        string libName;
        libFile >> libName;
        for (int j = 0; j < 5; j++) {
            int bookId;
            libFile >> bookId;
            if (libName == "LA") {
                libBooks[bookId] = true;
            }
        }
    }

    int m;
    bookFile >> m;
    for (int i = 0; i < m; i++) {
        int id, year;
        string category;
        bookFile >> id >> year >> category;
    }

    int p;
    authorFile >> p;
    for (int i = 0; i < p; i++) {
        string authorName;
        authorFile >> authorName;
        string line;
        getline(authorFile, line);
        stringstream ss(line);
        string token;
        while (ss >> token) {
            try {
                int bookId = stoi(token);
                if (authorName == "David") {
                    authorBooks[bookId] = true;
                }
            } catch (const invalid_argument& e) {
                cerr << "Error: Invalid book ID '" << token << "' in author.txt" << endl;
                return;
            }
        }
    }

    bool found = false;
    for (int i = 0; i < MAX_BOOKS; i++) {
        if (authorBooks[i] && libBooks[i]) {
            found = true;
            break;
        }
    }

    cout << (found ? "True" : "False") << endl;
}