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
        std::cout << "1. ��������� �������\n";
        std::cout << "2. ³������� �������\n";
        std::cout << "3. ��������� �������\n";
        std::cout << "4. ������� �������\n";
        std::cout << "5. ������� ���� �� ���������\n";
        std::cout << "6. �����\n";
        std::cout << "��� ����: ";
        std::cin >> choice;

        switch (choice) {
        case 1:
            std::cout << "���� �������: ";
            v1.add(v2).display();
            break;
        case 2:
            std::cout << "г����� �������: ";
            v1.subtract(v2).display();
            break;
        case 3:
            std::cout << "��������� �������: " << v1.dotProduct(v2) << std::endl;
            break;
        case 4:
            std::cout << "������� ������� 1: " << v1.length() << std::endl;
            break;
        case 5:
            std::cout << "������� ���� �� ���������: " << v1.cosineAngle(v2) << std::endl;
            break;
        case 6:
            std::cout << "����� � ��������.\n";
            break;
        default:
            std::cout << "������� ����. ��������� �� ���.\n";
        }
    } while (choice != 6);

    return 0;
}