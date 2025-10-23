// Laboratorium3.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;

int main()
{
    //ZAD.1
/*
    int a, b;

    cout << "podaj wartosc a: ";
    cin >> a;
    cout << endl;
    cout << "podaj wartosc b: ";
    cin >> b;
    cout << endl;

    if (a == b) {
        cout << "wartosci a i b sa rowne" << endl;
    }
    else if (a < b ) {
        cout << "wartosc a jest mniejsza" << endl;

    }
    else {
        cout << "wartosc b jest mniejsza" << endl;
    }
*/
//ZAD.2
/*
    int a, b;

    cout << "podaj wartosc a: ";
    cin >> a;
    cout << endl;
    cout << "podaj wartosc b: ";
    cin >> b;
    cout << endl;

    if(a == b) {
        cout << "wartosci a i b sa rowne" << endl;
    }
    else {
        if (a < b) {
            cout << "wartosc a jest mniejsza" << endl;}
        else {
            cout << "wartosc b jest mniejsza" << endl;}
    }
  */

  //ZAD.3
  /*
  float r;

  cout << "podaj wartosc wspolczynnika r ";
  cin >> r;
  cout << endl;

  if (r >= 0.7 && r <= 1.0) {
      cout << "bardzo silna korelacja dodatnia " << endl;
  }
  else if (r >= 0.5 && r < 0.7) {
      cout << "silna korelacja dodatnia " << endl;
  }
  else if (r >= 0.3 && r < 0.5) {
      cout << "umiarkowana korelacja dodatnia " << endl;
  }
  else if (r >= 0.2 && r < 0.3) {
      cout << "slaba korelacja dodatnia " << endl;
  }
  else {
      cout << "brak korelacji " << endl;
  }
*/

//ZAD.4
/*
    float a, b;
    char znak=0;

    cout << "podaj wartosc a: ";
    cin >> a;
    cout << endl;

    cout << "podaj znak: +, -, * lub / ";
    cin >> znak;
    cout << endl;


    cout << "podaj wartosc b: ";
    cin >> b;
    cout << endl;

    switch (znak) {
    case '+':
        cout << "wynik: " << a + b << endl;
        break;

    case '-':
        cout << "wynik: " << a - b << endl;
        break;

    case '*':
        cout << "wynik: " << a * b << endl;
        break;

    case '/':
        if (b == 0) {
            cout << "nie dzielimy przez 0!" << endl;
        }
        else {
            cout << "wynik: " << a / b << endl;
        }
        break;

    default :
        cout << "podano nieprawidlowy znak " << endl;

    }
*/

//ZAD.5
/*

while (1) {
    cout << "prawda" << endl;
}
*/

//ZAD.6
/*
    float a, b;
    char znak = 0, odp = 0;

    cout << "podaj wartosc a: ";
    cin >> a;
    cout << endl;

    cout << "podaj znak: +, -, * lub / ";
    cin >> znak;
    cout << endl;


    cout << "podaj wartosc b: ";
    cin >> b;
    cout << endl;

    do {

        switch (znak) {
        case '+':
            cout << "wynik: " << a + b << endl;
            break;

        case '-':
            cout << "wynik: " << a - b << endl;
            break;

        case '*':
            cout << "wynik: " << a * b << endl;
            break;

        case '/':
            if (b == 0) {
                cout << "nie dzielimy przez 0!" << endl;
            }
            else {
                cout << "wynik: " << a / b << endl;
            }
            break;

        default:
            cout << "podano nieprawidlowy znak " << endl;
            break;

        }
        cout << "Czy zakonczyc dzialanie? t - tak, n - nie: ";
        cin >> odp;

        if (odp == 't') {
            return 0;
        }
    } while (odp == 'n');

    return 0;
}
*/
//ZAD.7











return 0;
}


// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
