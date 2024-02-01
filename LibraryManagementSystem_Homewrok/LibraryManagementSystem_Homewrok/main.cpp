#include "Book.h"
#include "Member.h"

#include <vector>

int main() {
    // create at least two books
    Book firstBook("The Grass is Always Greener", "Jeffrey Archer", "1-86092-049-7");
    Book secondBook("Murder!", "Arnold Bennett", "1-86092-012-8");
    Book thirdBook("The Open Boat", "Stephen Crane", "1-86092-025-x");

    // create at least two members
    Member firstMember("Patrik Hammer", 29, "105");
    Member secondMember("Fridrich Pachinger", 63, "222");
    Member thirdMember("Willim Okadar", 39, "783");


    // create vector with books
    std::vector<Book*> books{ &firstBook };
    books.push_back(&secondBook);
    books.push_back(&thirdBook);


    size_t booksSize = books.size();
    
    // create vector with members
    std::vector<Member*> members;
    members.push_back(&firstMember);
    members.push_back(&secondMember);
    members.push_back(&thirdMember);

    size_t membersSize = members.size();
 

    for (size_t i = 0; i < membersSize; ++i) {
        for (size_t j = 0; j < booksSize; ++j) {
            members[i]->borrowBook(books[j]);
        }
    }

    return 0;
}