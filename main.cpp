#include <iostream>
#include <cmath>
#include <math.h>
#include <string>
#include <windows.h>
using namespace std;

int funkcja1(int tab[], int b) {
    int p = b - 1;
    int suma = 0;
    for (int i = 0; i <= b - 1; ++i) {
        suma = suma + (pow(2, p) * tab[i]);
        p--;
    }
    return suma;
}

string rozdzielPrzecinkiem(const string& wejsciowyString) {
    string wynik;

    for (size_t i = 0; i < wejsciowyString.length(); ++i) {
        wynik += wejsciowyString[i];
        if (i < wejsciowyString.length() - 1) {
            wynik += ",";
        }
    }
    return wynik;
}

int* strtoarray(const string& wejscie) {
    int rozmiar = wejscie.size();
    int* tablica = new int[rozmiar]();
    int j = 0;
    for (int i = 0; i < rozmiar; i++) {
        if (wejscie[i] == ',') {
            continue;
        }
        else {
            tablica[j] = tablica[j] * 2 + (wejscie[i] - '0');

        }
        j++;
    }
    return tablica;
}

int main() {
    string liczba;
    char czy;
    cout << "Witaj w konwerterze liczb binarnych na dziesietne !!! \n";
    cout << endl;
    cout << "Jesli chcesz zaczac wpisz T/t, jesli chcesz zakonczyc wpisz K/k: ";
    cin >> czy;
    if (czy == 'T' || czy == 't') {
        system("cls");
        cout << "Podaj liczbe w systemie binarnym: ";
        cin >> liczba;
        int b = liczba.size();
        string przecinek = rozdzielPrzecinkiem(liczba);
        cout << "\nLiczba w systemie dziesietnym: " << funkcja1(strtoarray(przecinek), b) << endl;

        for (int l = 1; l > 0; ++l) {
            cout << "\nJesli chcesz kontunuowac wpisz T/t, jesli nie wpisz K/k: ";
            cin >> czy;
            if (czy == 'T' || czy == 't') {
                system("cls");
                cout << "Podaj liczbe w systemie binarnym: ";
                cin >> liczba;
                int b = liczba.size();
                string przecinek = rozdzielPrzecinkiem(liczba);
                cout << "\nLiczba w systemie dziesietnym: " << funkcja1(strtoarray(przecinek), b) << endl;
            }
            else {
                system("cls");
                cout << "\n...\n";
                return 0;
            }
        }
    }
    else {
        system("cls");
        cout << "\n...\n";
        return 0;
    }
    return 0;
}
