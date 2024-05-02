// dz18.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

struct Employee {
    string lastName;
    int yearOfBirth;
    string position;
    double salary;
    string education;
};
int main() {
    setlocale(LC_ALL, "Ukr");
    Employee employees[5] = {
        {"Zagorulko", 1980, "Traktoryst", 50000, "Ptu-28"},
        {"Garbuz", 1975, "Agronom", 60000, "Dokuchaeva"},
        {"Koval", 1960, "Zootechnik", 70000, "Veterinarna akademia"},
        {"Patsiuk", 1990, "Kombainer", 55000, "Ptu-28"},
        {"Kulik", 1985, "Vodii", 45000, "Ptu-28"}
    };

    

    int count = 0;
    cout << "Список працівників старших за 60 років:" << endl;
    for (int i = 0; i < 5; ++i) {
        if (2024 - employees[i].yearOfBirth > 60) {
            cout << "Прізвище: " << employees[i].lastName << endl;
            cout << "Рік народження: " << employees[i].yearOfBirth << endl;
            cout << "Посада: " << employees[i].position << endl;
            cout << "Зарплата: " << employees[i].salary << endl;
            cout << "Освіта: " << employees[i].education << endl << endl;
            ++count;
        }
    }
    cout << "Загальна кількість працівників старших за 60 років: " << count << endl;

    return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
