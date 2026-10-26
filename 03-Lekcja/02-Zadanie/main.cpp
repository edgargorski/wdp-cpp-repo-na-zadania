#include <iostream>
using namespace std;

int main() {
    int a, b;
    char op;
    cin >> a >> op >> b;

    if ((op == '/' || op == '%') && b == 0) {
        cout << "Błąd: Dzielenie przez zero!" << endl;
    } else if (op == '+') cout << a + b << endl;
    else if (op == '-') cout << a - b << endl;
    else if (op == '*') cout << a * b << endl;
    else if (op == '/') cout << a / b << endl;
    else if (op == '%') cout << a % b << endl;
    else cout << "Nieznany operator!" << endl;
}
