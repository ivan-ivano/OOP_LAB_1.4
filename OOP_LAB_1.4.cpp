#include <iostream>
#include "vector.h"
#include <windows.h>

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    Vector v1, v2;
    v1.Read();
    v1.display();
    v2.Read();
    v2.display();
    int choice;
    do {
        std::cout << "\n------ Menu ------\n";
        std::cout << "1. Додавання векторів\n";
        std::cout << "2. Віднімання векторів\n";
        std::cout << "3. Скалярний добуток\n";
        std::cout << "4. Довжина вектора\n";
        std::cout << "5. Косинус кута між векторами\n";
        std::cout << "6. Вихід\n";
        std::cout << "Ваш вибір: ";
        std::cin >> choice;

        switch (choice) {
        case 1:
            std::cout << "Сума векторів: ";
            v1.add(v2).display();
            break;
        case 2:
            std::cout << "Різниця векторів: ";
            v1.subtract(v2).display();
            break;
        case 3:
            std::cout << "Скалярний добуток: " << v1.dotProduct(v2) << std::endl;
            break;
        case 4:
            std::cout << "Довжина вектора 1: " << v1.length() << std::endl;
            break;
        case 5:
            std::cout << "Косинус кута між векторами: " << v1.cosineAngle(v2) << std::endl;
            break;
        case 6:
            std::cout << "Вихід з програми.\n";
            break;
        default:
            std::cout << "Невірний вибір. Спробуйте ще раз.\n";
        }
    } while (choice != 6);

    return 0;
}