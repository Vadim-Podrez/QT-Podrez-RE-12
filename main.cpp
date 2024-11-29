#include "LibraryTicket.h"

int main() {
    // Виклик конструктора за замовчуванням
    LibraryTicket ticket1;

    // Виклик конструктора з параметрами
    LibraryTicket ticket2("John Doe", "University", "PhD", "2024-10-01", "2025-01-01");

    // Вивід інформації
    ticket1.displayInfo();
    ticket2.displayInfo();

    return 0;
}
