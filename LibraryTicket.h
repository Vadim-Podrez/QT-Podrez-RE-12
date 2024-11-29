#ifndef LIBRARYTICKET_H
#define LIBRARYTICKET_H

#include <string>
#include <vector>

class LibraryTicket {
private:
    std::string userName;
    std::string placeOfWork;
    std::string academicDegree;
    std::vector<std::string> borrowedBooks;
    std::string registrationDate;
    std::string returnDate;

public:
    // Конструктор за замовчуванням
    LibraryTicket();

    // Конструктор з параметрами
    LibraryTicket(std::string name, std::string work, std::string degree,
                  std::string regDate, std::string retDate);

    // Метод для виводу інформації
    void displayInfo() const;
};

#endif // LIBRARYTICKET_H
