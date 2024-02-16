#include <iostream>
#include <string>
using namespace std;

// create a class Book
class Book {
private:
    string Title;
    string Author;
    int Pages;
public:
    // create a setters and getters
    Book(string, string, int);
    void setTitle(string title) { Title = title; }
    string getTitle() { return Title; }
    void setAuthor(string author) { Author = author; }
    string getAuthor() { return Author; }
    void setPages(int pages) { Pages = pages; }
    int getPages() { return Pages; }
    void display() {
        cout << "Book title: " << this->getTitle() << ", author: " << this->getAuthor()
            << ", pages " << this->getPages() << ". " << endl;
    }
};
//create a constructor
Book::Book(string title, string author, int pages) {
    Title = title;
    Author = author;
    Pages = pages;
}

int main() {
    // create some books
    Book b1("The Sun also rises", "Ernest Hemingway", 350);
    Book b2("Alone on a Wide, Wide Sea", "Michael Morpurgo", 261);
    Book b3("Gone With the wind", "Margaret Mitchell", 197);

    // print books
    b1.display();
    b2.display();
    b3.display();

    return 0;
}