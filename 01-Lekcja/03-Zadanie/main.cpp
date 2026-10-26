#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    string imie;
    int wiek;
    double wzrost;

    cin >> imie >> wiek >> wzrost;

    cout << imie << endl;
    cout << wiek << endl;
    cout << fixed << setprecision(2) << wzrost << endl;
}
