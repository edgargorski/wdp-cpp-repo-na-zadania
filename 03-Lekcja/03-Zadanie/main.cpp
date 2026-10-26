#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    if (b == 0) {
        cout << "Błąd: Dzielenie przez zero!" << endl;
    } else if (a % b == 0) {
        cout << "Pierwsza liczba jest podzielna przez drugą." << endl;
    } else {
        cout << "Pierwsza liczba NIE jest podzielna przez drugą." << endl;
    }
}
