//LotOfTasks

/*
Podstawy programowania:

1. Program obliczaj�cy �redni� arytmetyczn� dw�ch liczb.
2. Program obliczaj�cy pole prostok�ta.
3. Program obliczaj�cy obj�to�� sto�ka.
4. Program obliczaj�cy pole ko�a.
5. Program obliczaj�cy warto�� wyra�enia a^2 + b^2
6. Program obliczaj�cy pole tr�jk�ta o podstawie b i wysoko�ci h
7. Program obliczaj�cy obj�to�� kuli o promieniu r
8. Program obliczaj�cy pole trapezu o podstawach a i b oraz wysoko�ci h
9. Program obliczaj�cy �redni� wa�on� trzech liczb z podanymi odpowiednimi wagami w1, w2 i w3.

Instrukcja If:
1. Program sprawdzaj�cy czy podana liczba jest parzysta czy nieparzysta
2. Program sprawdzaj�cy czy podana liczba jest dodatnia, ujemna czy r�wna zero
3. Program sprawdzaj�cy czy podany rok jest rokiem przest�pnym
4. Program wy�wietlaj�cy odpowiedni komunikat w zale�no�ci od podanej oceny (np. "bardzo dobry" dla oceny 5, "dobry" dla oceny 4 itd.)
5. Program sprawdzaj�cy czy podane has�o jest poprawne (np. je�li has�o jest "abc123", program powinien wy�wietli� "has�o poprawne", je�li jest inne, powinien wy�wietli� "has�o niepoprawne").
6. Program sprawdzaj�cy czy podana data jest poprawna (np. sprawdzaj�c, czy dzie� jest z zakresu od 1 do 31, miesi�c od 1 do 12 itd.)
7. Program wy�wietlaj�cy odpowiedni komunikat w zale�no�ci od podanej temperatury (np. "ciep�o" dla temperatury powy�ej 20 stopni Celsjusza, "ch�odno" dla temperatury poni�ej 10 stopni Celsjusza itd.)

P�tle:
1. Program sprawdzaj�cy czy podana liczba jest liczb� pierwsz� (czyli tak�, kt�ra dzieli si� tylko przez 1 i przez siebie sam�)
2. Program sprawdzaj�cy czy podany ci�g znak�w jest palindromem (czyli takim, kt�ry czytany od ty�u jest taki sam, jak czytany od przodu, np. "kajak")
3. Program sprawdzaj�cy czy podane dwa s�owa s� anagramami (czyli takimi, kt�re zawieraj� te same litery, ale w innym uk�adzie, np. "klasa" i "salka")
4. Program sprawdzaj�cy czy podana liczba jest liczb� doskona�� (czyli tak�, kt�rej suma dzielnik�w (z wy��czeniem samej siebie) jest r�wna danej liczbie, np. 6 jest liczb� doskona��, poniewa� 1 + 2 + 3 = 6).

P�tla for:
1. Program wy�wietlaj�cy na ekranie kolejne liczby naturalne od 1 do 10
2. Program obliczaj�cy sum� liczb od 1 do 100
3. Program wy�wietlaj�cy na ekranie kwadraty liczb od 1 do 10 (np. 1, 4, 9, 16 itd.)
4. Program wy�wietlaj�cy na ekranie silnie z liczb od 1 do 10 (np. 1!, 2!, 3!, 4! itd.)
5. Program wy�wietlaj�cy na ekranie tabliczk� mno�enia od 1 do 9 (np. 1x1=1, 1x2=2, 1x3=3 itd.).
6. Program wy�wietlaj�cy na ekranie wszystkie liczby podzielne przez 3 z zakresu od 1 do 100
7. Program obliczaj�cy sum� kwadrat�w liczb od 1 do 10
8. Program wy�wietlaj�cy na ekranie ci�g Fibonacciego do 20 elementu (ci�g Fibonacciego to ci�g gdzie ka�dy element jest sum� dw�ch poprzednich, np. 0, 1, 1, 2, 3, 5, 8, 13 itd.)
9. Program wy�wietlaj�cy na ekranie kolejne pot�gi 2 od 2^0 do 2^10 (np. 2^0, 2^1, 2^2 itd.)

P�tla do-while:
1. Program pytaj�cy u�ytkownika o has�o i wy�wietlaj�cy komunikat "has�o poprawne" lub "has�o niepoprawne" dop�ki u�ytkownik nie poda poprawnego has�a (np. "abc123").
2. Program wy�wietlaj�cy na ekranie kwadraty liczb od 1 do 10 (np. 1, 4, 9, 16 itd.) dop�ki suma tych kwadrat�w nie przekroczy 1000.

Trudniejsze zadania:
1. Program implementuj�cy algorytm szyfrowania Cezara (proste szyfrowanie, w kt�rym ka�dy znak w tek�cie jest zast�powany innym znakiem, przesuni�tym o sta�� liczb� pozycji w alfabecie).
2. Program obliczaj�cy najwi�kszy wsp�lny dzielnik (NWD) dw�ch liczb
3. Program obliczaj�cy najmniejsz� wsp�ln� wielokrotno�� (NWW) dw�ch liczb.
4. Program wyci�gaj�cy informacje z numeru PESEL
5. Napisz program, kt�ry pobiera od u�ytkownika ci�g znak�w i wy�wietla liczb� samog�osek i sp�g�osek w tym ci�gu.


Dla zaawansowanych:
1. Program implementuj�cy algorytm generowania liczb pseudolosowych (np. algorytm Mersenne Twister).
2. Algorytm szyfrowania AtBash Cipher - algorytm szyfruj�cy, w kt�rym ka�da litera jest zamieniana na liter� z przeciwnej strony alfabetu (np. A na Z, B na Y itd.)
3. Algorytm szyfrowania Morse'a - algorytm szyfruj�cy, w kt�rym ka�da litera w tek�cie jest zamieniana na ci�g znak�w "+" i "-", zgodny z kodem Morse'a.
4. Napisz program, kt�ry pobiera od u�ytkownika dwie macierze kwadratowe o takim samym rozmiarze i wy�wietla ich iloczyn.
5. Program kt�ry na wej�ciu przyjmie r�wnanie a na wyj�ciu da r�wnanie w odwrotnej notacji polskiej ONP. Np. na wej�ciu 2+3*4 na wyj�cu da 234*+
6. Program, kt�ry na wej�ciu przyjmie r�wanie w ONP a na wyj�ciu wy�wietli wynik r�wania.
7. Napisz gr� k�ko i krzy�yk.

*/

#define _USE_MATH_DEFINES
#include <iostream>

//7. Program obliczaj�cy obj�to�� kuli o promieniu r
void task1()
{
	double r;
	std::cout << "Podaj promie�\n";
	std::cin >> r;

	double v = 4.0 / 3 * M_PI * r * r * r;

	std::cout << "Obj�to�� kuli:" << v << "\n";
}

//6. Program sprawdzaj�cy czy podana data jest poprawna (np. sprawdzaj�c, czy dzie� jest z zakresu od 1 do 31, miesi�c od 1 do 12 itd.)
void task2()
{
	int day, month, year;
	std::cout << "Podaj dzie�, miesi�c i rok\n";
	std::cin >> day >> month >> year;

	if (day < 1 || month < 1 || year == 0)
	{
		std::cout << "B��dna data\n";
		return;
	}

	if (month > 12)
	{
		std::cout << "B��dny miesi�c (za du�y)\n";
		return;
	}

	if (day > 31)
	{
		std::cout << "B��dny dzie� (za du�y)\n";
		return;
	}

	if (day == 31 && (month == 2 || month == 4 || month == 6 || month == 9 || month == 11))
	{
		std::cout << "B��dny dzie� (za du�y)\n";
		return;
	}

	if (day > 29 && month == 2)
	{
		std::cout << "B��dny dzie� (za du�y)\n";
		return;
	}

	if (day == 29 && month == 2 && !(year % 4 == 0 && year % 100 != 0 || year % 400 == 0))
	{
		std::cout << "B��dny dzie� (za du�y)\n";
		return;
	}

	std::cout << "Data jest prawid�owa\n";
}

//1. Program sprawdzaj�cy czy podana liczba jest liczb� pierwsz� (czyli tak�, kt�ra dzieli si� tylko przez 1 i przez siebie sam�)
void task3()
{
	int number;
	std::cout << "Podaj liczb�\n";
	std::cin >> number;

	//zak�adamy �e liczba jest pierwsza
	int isPrime = 1;

	//algorytm sprawdzaj�cy czy nie jest pierwsza
	for (int i = 2; i < sqrt(number); i++)
	{
		if (number % i == 0)
		{
			isPrime = 0;
			break;
		}
	}

	if (isPrime == 1)
	{
		std::cout << "Liczba jest pierwsza\n";
	}
	else
	{
		std::cout << "Liczba nie jest pierwsza\n";
	}

}

//1. Program implementuj�cy algorytm szyfrowania Cezara (proste szyfrowanie, w kt�rym ka�dy znak w tek�cie jest zast�powany innym znakiem, przesuni�tym o sta�� liczb� pozycji w alfabecie).
void task4()
{
	std::string textFromUser;
	std::cout << "Podaj napis\n";
	std::cin >> textFromUser;
	int shift = 1;

	for (int i = 0; i < textFromUser.length(); i++)
	{
		//ma�e litery
		if (textFromUser[i] >= 97 && textFromUser[i] <= 'z')
		{
			textFromUser[i] = textFromUser[i] + shift;

			if (textFromUser[i] > 'z')
			{
				textFromUser[i] = textFromUser[i] - 26;
			}
		}

		if (textFromUser[i] >= 'A' && textFromUser[i] <= 'Z')
		{
			textFromUser[i] = textFromUser[i] + shift;

			if (textFromUser[i] > 'Z')
			{
				textFromUser[i] = textFromUser[i] - 26;
			}
		}

		if (textFromUser[i] >= '0' && textFromUser[i] <= '9')
		{
			textFromUser[i] = textFromUser[i] + shift;

			if (textFromUser[i] > '9')
			{
				textFromUser[i] = textFromUser[i] - 10;
			}
		}
	}

	std::cout << "Po zaszyfrowaniu: " << textFromUser << "\n";
}

//8. Program wy�wietlaj�cy na ekranie ci�g Fibonacciego do 20 elementu
//(ci�g Fibonacciego to ci�g gdzie ka�dy element jest sum� dw�ch poprzednich, np. 0, 1, 1, 2, 3, 5, 8, 13 itd.)
void task5()
{
	int count = 30;
	std::cout << "0, 1, ";

	int f2, f1;
	int f;

	f2 = 0;
	f1 = 1;
	for (int i = 2; i < count; i++)
	{
		f = f2 + f1;
		std::cout << f << ", ";
		f2 = f1;
		f1 = f;
	}
}

//5. Napisz program, kt�ry pobiera od u�ytkownika ci�g znak�w i wy�wietla liczb� samog�osek i sp�g�osek w tym ci�gu.
void task6()
{
	std::string textFromUser;
	std::cout << "Podaj wyraz\n";
	std::cin >> textFromUser;

	int sumOfVowel = 0;

	for (int i = 0; i < textFromUser.length(); i++)
	{
		if (textFromUser[i] == 'a'
			|| textFromUser[i] == 'e'
			|| textFromUser[i] == 'i'
			|| textFromUser[i] == 'o'
			|| textFromUser[i] == 'u'
			|| textFromUser[i] == 'x'
			|| textFromUser[i] == 'y'
			|| textFromUser[i] == 'A'
			|| textFromUser[i] == 'E'
			|| textFromUser[i] == 'I'
			|| textFromUser[i] == 'O'
			|| textFromUser[i] == 'U'
			|| textFromUser[i] == 'X'
			|| textFromUser[i] == 'Y'
			)
			sumOfVowel++;
	}

	std::cout << "Ilo�� samog�osek: " << sumOfVowel << "\n";

	int sumOfConsonant = 0;
	std::string stringWidthConsonants = "bcdfghjklmnprstwzBCDFGHJKLMNPRSTWZ";

	for (int i = 0; i < textFromUser.length(); i++)
	{
		//wersja 1
		bool isConsonant = false;
		for (int j = 0; j < stringWidthConsonants.length(); j++)
		{
			if (textFromUser[i] == stringWidthConsonants[j])
			{
				isConsonant = true;
				break;
			}
		}

		//wersja2
		//stringWidthConsonants = "bcd";
		//textFromUser[i] = "c";
		isConsonant = true;
		int coutOfNegativeCheck = 0;
		for (int j = 0; j < stringWidthConsonants.length(); j++)
		{
			if (textFromUser[i] != stringWidthConsonants[j])
			{
				coutOfNegativeCheck++;
			}
			else
			{
				break;
			}
		}
		if (coutOfNegativeCheck == stringWidthConsonants.length())
			isConsonant = false;

		//wsp�lna cz�� dla obu wersji
		if (isConsonant == true)
			sumOfConsonant++;
	}
	std::cout << "Ilo�� sp�g�osek: " << sumOfConsonant << "\n";
}

int main()
{
	//float pi = 2 * M_PI * promie�;
	//std::cout << "Hello World!\n";
	task5();
}
