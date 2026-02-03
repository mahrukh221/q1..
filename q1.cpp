#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string title;
    string author;
    double price;

public:
    Book() {
        title = "Untitled";
        author = "lonely";
        price = 0.0;
    }

    Book(string t, string a = "Unknown", double p = 0.0) {
        title = t;
        author = a;
        price = p;
    }

    Book(const Book &obj) {
        title = obj.title;
        author = obj.author;
        price = obj.price;
    }

    void show() {
        cout << "Book Details:" << endl;
        cout << "Title : " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price : " << price << endl;
        cout << endl;
    }
};

int main() {
    Book b1;
    b1.show();

    Book b2("mission imposibble", "F. Scott ", 1500.01);
    b2.show();

    Book b3("1984");
    b3.show();

    Book b4 = b2;
    b4.show();

    return 0;
}
