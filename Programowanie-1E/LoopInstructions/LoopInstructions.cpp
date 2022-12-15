#include <iostream>
#include <string>

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

/*
Zadanie 2
Napisz funkcj�, kt�ra wy�wietli wszystkie liczby ca�kowite z przedzia�u <1;10>
*/

void task2()
{
    std::cout << "1, 2, 3, 4, 5, 6, 7, 8, 9, 10, \n";

    int currentNumber = 1;

    do
    {
        std::cout << currentNumber << ", ";
        //currentNumber = currentNumber + 1;
        //currentNumber += 1;
        currentNumber++;
    } while (currentNumber != 11); // (currentNumber < 11)
}

/*
Zadanie 3
Napisz funkcj�, kt�ra wy�wietli wszystkie liczby ca�kowite z przedzia�u pobranego od u�ytkownika
*/

void task3()
{
    int lowRange, highRange;
    std::cout << "Podaj zakres dolny\n";
    std::cin >> lowRange;
    std::cout << "Podaj g�rny zakres\n";
    std::cin >> highRange;

    int currentNumber = lowRange;
    
    do
    {
        std::cout << currentNumber << ", ";
        currentNumber++;
    } while (currentNumber != highRange + 1); // (currentNumber <= highRange)
}

/*
Zadanie 4
Zgadnij liczb�.
*/

void task4()
{
    int randomNumber;

    srand(time(NULL));

    /*
    <a;b> a <= b

    <0; b-a>
    rand() % (b - a + 1) + a;

    */
    //od 1 do 100
    randomNumber = rand() % 100 + 1;

    //std::cout << "Wylosowana liczba to " << randomNumber << "\n";

    int numberFromUser;
    do
    {
        std::cout << "Podaj liczb�:\n";
        std::cin >> numberFromUser;

        if (numberFromUser > randomNumber)
            std::cout << "Liczba za du�a\n";
        if (numberFromUser < randomNumber)
            std::cout << "Liczba za ma�a\n";
    } while (numberFromUser != randomNumber);

    std::cout << "Gratulacje.";
}

/*
Zadanie 5
Napisz funkcj�, kt�ra wy�wietli wszystkie liczby ca�kowite z przedzia�u pobranego od u�ytkownika

Poprawka do zadania 3 gdzie g�rny zakres nie mo�e by� mniejszy od dolnego.
*/
void task5()
{
    int lowRange, highRange;
    std::cout << "Podaj zakres dolny\n";
    std::cin >> lowRange;
    std::cout << "Podaj g�rny zakres\n";
    std::cin >> highRange;

    if (lowRange > highRange)
        std::cout << "B��dny zakres\n";

    int currentNumber = lowRange;
    while (currentNumber <= highRange)
    {
        std::cout << currentNumber << ", ";
        currentNumber++;
    }
    std::cout << "\nTa linijka jest poza petl�\n";
}

/*
Zadanie 6
Napisz funkcj� kt�ra policzy NWD dw�ch liczb. NWD - najwi�kszy wsp�lny dzielnik
*/
void task6()
{
    int firstNumber, secondNumber;
    std::cout << "Podaj pierwsz� liczb�\n";
    std::cin >> firstNumber;
    std::cout << "Podaj drug� liczb�\n";
    std::cin >> secondNumber;

    int dzielnik;
    if (firstNumber > secondNumber)
        dzielnik = secondNumber;
    else
        dzielnik = firstNumber;
    //algorytm NWD
    while (firstNumber % dzielnik > 0 || secondNumber % dzielnik > 0)
        dzielnik--;

    //Wersja 2 algorytmu
    /*
        NWD(a, b) = a je�li b = 0
        NWD(a, b) = NWD(b, a % b) je�li b != 0
    */
    int a = firstNumber;
    int b = secondNumber;

    while (b != 0)
    {
        int tmpA = a;
        a = b;
        b = tmpA % b;
    }

    std::cout << "NWD = " << dzielnik << "\n";
    std::cout << "NWD = " << a << "\n";
}

/*
Zadanie 7
1 => 1 = 1!
2 => 2 = 1*2 = 2!
3 => 6 = 1*2*3 = 3!
4 => 24 = 1*2*3*4 = 4!
5 => 120 = 1*2*3*4*5 = 5!
6 => 720 = 1*2*3*4*5*6 = 6!
7 => 5040 = 1*2*3*4*5*6*7 = 7!
8 => 5040 * 8 = 1*2*3*4*5*6*7*8 = 8!
9 => 9!
Napisz funkcj�, kt�ra policzy warto�� silni liczby od u�ytkownika
*/
void task7()
{
    int numberFromUser;
    std::cout << "Podaj liczb�:\n";
    std::cin >> numberFromUser;

    unsigned long long result = 1;

    /*int i = 2;
    while (i <= numberFromUser)
    {
        result = result * i;

        i++;
    }*/
              //1       2                 4
    for (int i = 2; i <= numberFromUser; i++)
    {
        //3
        result = result * i;
    }

    std::cout << numberFromUser << "! = " << result << "\n";
}

/*
Zadanie 8
Wczyta� napis i wy�wietli� ile jest liter 'a' w tym wyrazie.
*/
void task8()
{
    std::string textFromUser;
    std::cout << "Podaj wyraz\n";
    std::cin >> textFromUser;
     
    //textFromUser[0] = 'A';
    std::cout << "U�ytkownik poda�: " << textFromUser << "\n";
    std::cout << "Napis sk�ada si� z " << textFromUser.length() << " znak�w\n";
    std::cout << "Pierwszy znak z napisu to " << textFromUser[0] << "\n";
    std::cout << "Ostatni znak z napisu to " << textFromUser[textFromUser.length() - 1] << "\n";

    int coutChar = 0;
    for (int i = 0; i < textFromUser.length(); i++)
    {
        if (textFromUser[i] == 'a')
            coutChar++;
    }    

    std::cout << "Znak�w 'a' jest "<< coutChar << "\n";
}

/*
Zadanie 9
Napisz funkcj�, kt�ra wczyta wyraz i zamieni du�e litery na ma�e i odwrotnie
*/
void task9()
{      
    std::string textFromUser;
    std::cout << "Podaj wyraz\n";
    std::cin >> textFromUser;

    for (int i = 0; i < textFromUser.length(); i++)
    {
        //if (textFromUser[i] >= 65 && textFromUser[i] <= 90)
        if (textFromUser[i] >= 'A' && textFromUser[i] <= 'Z')
            textFromUser[i] = textFromUser[i] + 32;
        else if (textFromUser[i] >= 'a' && textFromUser[i] <= 'z')
            textFromUser[i] = textFromUser[i] - 32;
    }

    std::cout << "Napis po zamianie: " << textFromUser << "\n";
}

/*
Zadanie 10
Wczytaj liczb� od u�ytkownika. Program zabezpiecz przed podaniem nie liczby.
*/
void task10()
{
    int numberFromUser;
    std::string textFromUser;
    bool isAllDigit;
    do
    {
        std::cout << "Podaj liczb�\n";
        //std::cin >> textFromUser;
        std::getline(std::cin, textFromUser);
        
        isAllDigit = true;
        //sprawdzi� czy tak nie jest
        for (int i = 0; i < textFromUser.length(); i++)
        {
            if (textFromUser[i] < '0' || textFromUser[i] > '9')
            {
                isAllDigit = false;
            }
        }
        //if (isAllDigit == false)
        if (!isAllDigit)
        {
            std::cout << "Podano b��dn� dan�. Podaj jeszcze raz.\n";
        }

    } while (isAllDigit == false);//(u�ytkownik nie poda� liczby);

    numberFromUser = 0;
    for (int i = 0; i < textFromUser.length(); i++)
    {
        numberFromUser = numberFromUser * 10 + (textFromUser[i] - '0');
    }

    std::cout << "Uzytkownik poda� " << numberFromUser << "\n";
}

int main()
{
    setlocale(LC_CTYPE, "polish");

    //task1();
    //task2();
    //task3();
    //task4();
    //task5();
    //task6();
    //task7();
    //task8();
    //task9();
    task10();
}
