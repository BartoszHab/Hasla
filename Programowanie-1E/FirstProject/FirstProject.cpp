// FirstProject.cpp : This file contains the 'main' function.
//  Program execution begins and ends there.


#include <iostream>

int main()
{
    /* 
    Instrukcja do wy�wietlania informacji na standardowy strumie� wyj�cia.
    Domy�lnie, jesli nie zosta�o to zmienione, jest to konsola w kt�rej aplikacja 
    zosta�a uruchomiona.
    Aby wyswietli� na konsoli nalezy u�y� std::cout.
    Na konosle wywy�amy za pomoca operatora <<.
    Po nim musi znajdowa� si� dana do wys�ania.
    Instrukcj� ko�czymy znakiem �rednik.

    "Hello World!\n" - jest to sta�a o warto�ci tekstowej.
    Sta�e tekstowe s� ograniczone znakami cudzys�owu.
    * ' (apostrof) - jesli jest jeden znak
    * " (cudzys��w) - jesli jest zero lub wi�cej znak�w

    W sta�ych tekstowych moga by� wstawiane znaki specjalne. Takie znaki 
    zaczynaj� si� od znaku \ (backslash) po kt�rym mo�e si� znajdowa�:
    * jedna litera alfabetu angielskiego
    * trzy cyfry daj�ce liczb� �semkow�
    Przyk�adowo:
    * \n - symbol oznaczaj�cy now� lini�.
    * \t - symbol oznaczaj�cy znak tabulatora
    * \\ - symbol oznaczaj�cy znak \
    * \' - symbol oznaczaj�cy znak '
    * \" - symbol oznaczaj�cy znak "
    * \141 - symbol �semkowy oznaczajacy zgodnie z tablic� kod�w ASCII znak m�aej literki a
    */

    //github.com/IronLittleFox

    std::cout << "Hel\nlo World!\n";
    std::cout << "Hello World!\n";

    std::cout << "Predkosc to km\\h";

    std::cout << "Tabulator\ttabulator\n";

    /*
   56 - sta�a liczbowa
   Sta�e liczowe mog� sk�ada� si� tylko z:
   * cyfr arabskich: 0,1,2,3,4,5,6,7,8,9
   * znaku + lub - znajduj�cego si� na pocz�tku warto�ci ozaczaj�cy znak liczby
   * znaku . (kropka) oznaczaj�cy granic� pomi�dzy cz�ci� ca�kowit� a rzeczywist�
   */
    std::cout << -56;
    std::cout << "\n";
    std::cout << "56";
    std::cout << "\n";
    std::cout << +15.5;
    std::cout << "\n";

    /* Je�li wyst�puje potrzeba wy�wietlenia dw�ch lub wi�cej warto�ci mo�na 
    kontynuowa� instrukcj�
    ale te warto�ci nalezy rozdzieli� znakiem <<.
    */
    std::cout << 125.5 << " to jest tekst " << 16 << "\n";


}
