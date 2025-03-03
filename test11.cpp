#include <iostream>

using namespace std;

int main() {
    int chislo;
    cout << "Введите число: ";
    cin >> chislo;
    cout << "Простые числа среди делителей: ";

    for (int i = 1; i <= chislo; i++) {
        if (chislo % i == 0) {
            bool naturalChislo = true;
            if (i < 2) naturalChislo = false;

            for (int j = 2; j * j <= i; j++) {
                if (i % j == 0) {
                    naturalChislo = false;
                    break;
                }
            }

            if (naturalChislo) {
                cout << i << " ";
            }
        }
    }
    cout << "\n";
}
