
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double o1, o2, o3, o4, o5;
    cin >> o1 >> o2 >> o3 >> o4 >> o5;

    double srednia = (o1 + o2 + o3 + o4 + o5) / 5;
    cout << fixed << setprecision(2) << srednia << endl;
}
