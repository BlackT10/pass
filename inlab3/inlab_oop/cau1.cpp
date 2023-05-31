/*
Cho class như sau:

class Book {
public:
    Book(const char*);
    ~Book();
    void display();
private:
    char* name;
};
Hiện thực constructor và destructor của Book sao cho chương trình sau không bị lỗi khi chạy:
Book * pBook = new Book("To Kill a Mockingbird");
pBook->display();
delete pBook;
Kết quả in ra:
Book: To Kill a Mockingbird
*/

// string.h is included

class Book {
    char* name;
public:
    Book(const char*);
    ~Book();
    
    void display();
    char* getName();
};

void Book::display() {
    cout << "Book: " << this->name << endl;
}

char* Book::getName() {
    return this->name;
}


// TODO: Book and ~Book
Book::Book(const char* name) {
    this->name = new char[strlen(name) + 1];
    strcpy(this->name, name);
}

Book::~Book() {
    delete[] this->name;
}