#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    cout << "Większa: " << (a > b ? a : b) << endl;
    cout << "Mniejsza: " << (a < b ? a : b) << endl;
    cout << a << (a > b ? " > " : a < b ? " < " : " == ") << b << endl;
}
