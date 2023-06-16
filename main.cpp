#include <iostream>

// Definicja funkcji
int dodaj(int a, int b) {
    int suma = a + b;
    return suma;
}

// Wywołanie funkcji w funkcji main
int main() {
    int x = 5;
    int y = 3;

    // Wywołanie funkcji dodaj i przypisanie wyniku do zmiennej
    int wynik = dodaj(x, y);

    // Wyświetlenie wyniku
    std::cout << "Wynik dodawania: " << wynik << std::endl;

    return 0;
}

