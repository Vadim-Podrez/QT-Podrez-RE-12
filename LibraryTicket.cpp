#include "LibraryTicket.h"
#include <iostream>

// Конструктор за замовчуванням
LibraryTicket::LibraryTicket()
    : userName("Unknown"), placeOfWork("Unknown"), academicDegree("Unknown"),
    registrationDate("Unknown"), returnDate("Unknown") {}

// Конструктор з параметрами
LibraryTicket::LibraryTicket(std::string name, std::string work, std::string degree,
                             std::string regDate, std::string retDate)
    : userName(name), placeOfWork(work), academicDegree(degree),
    registrationDate(regDate), returnDate(retDate) {}

// Метод для виводу інформації
void LibraryTicket::displayInfo() const {
    std::cout << "User: " << userName << "\n"
              << "Workplace: " << placeOfWork << "\n"
              << "Academic Degree: " << academicDegree << "\n"
              << "Registration Date: " << registrationDate << "\n"
              << "Return Date: " << returnDate << "\n";
}
