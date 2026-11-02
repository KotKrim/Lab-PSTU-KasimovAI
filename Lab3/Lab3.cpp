#include <iostream>
#include <cmath>
#include <clocale>
using namespace std;

int main() {
    setlocale(LC_ALL, "ru_RU.UTF-8");
    double a = 0.1, b = 0.8, e = 0.0001;
    int k = 10, n = 3;
    double h = (b - a) / k;

    cout << "Вычисление функции" << endl;

    for (int i = 0; i <= k; i++) {
        double x = a + i * h;
        double sn = 0, se = 0, el = x;

        for (int j = 0; j <= n; j++) {
            sn += pow(x, 4 * j + 1) / (4 * j + 1);
        }

        int j = 0;
        while (fabs(el) >= e) {
            se += el;
            j++;
            el = pow(x, 4 * j + 1) / (4 * j + 1);
        }

        double y = 0.25 * log((1 + x) / (1 - x)) + 0.5 * atan(x);
        cout << "X=" << x << "  SN=" << sn << "  SE=" << se << "  Y=" << y << endl;
    }

    return 0;
}