#include <iostream>

/*
Zadanie 1
Napisz funkcj�, kt�ra pobierze od u�ytkownika liczb� dodatni� (do skutku). 
*/

void task1()
{
    int number;

    do
    {
        std::cout << "Podaj liczb� dodatni�:\n";
        std::cin >> number;
    } while (number <= 0);

    std::cout << "Poda�e� liczb� " << number << "\n";

}

int main()
{
    setlocale(LC_CTYPE, "polish");

    task1();
}
