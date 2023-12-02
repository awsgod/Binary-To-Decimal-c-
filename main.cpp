#include <iostream>
#include <cmath>
#include <math.h>
#include <string>
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
    cout << "Jesli chcesz zaczac wpisz T/t, jesli chcesz zakonczyc wpisz K/k: ";
    cin >> czy;
    if (czy == 'T' || czy == 't') {
        cout << "\nPodaj liczbe w systemie binarnym: ";
        cin >> liczba;
        int b = liczba.size();
        string przecinek = rozdzielPrzecinkiem(liczba);

        cout << "\nLiczba w systemie dziesiêtnym: " << funkcja1(strtoarray(przecinek), b);

    }
    else if (czy == 'K' || czy == 'k') {
        cout << "\n...";
        return 0;
    }
    else {
        cout << "\n...";
        return 0;
    }

    return 0;
}