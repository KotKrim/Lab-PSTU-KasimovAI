#include <iostream>
#include <clocale>
using namespace std;

int main() {
    setlocale(LC_ALL, "ru_RU.UTF-8");
    double e = 0.0001, a = 10, s = 0;
    int n = 1;

    while (a >= e) {
        s += a;
        n++;
        a = a * 10 / n;
    }

    cout << "Сумма ряда: " << s << endl;
    return 0;
}