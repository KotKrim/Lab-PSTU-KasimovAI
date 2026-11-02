#include <iostream>
#include <ctime>
#include <clocale>
using namespace std;

int main() {
    setlocale(LC_ALL, "ru_RU.UTF-8");
    srand(time(0));

    int a[100], n, x, k;
    cout << "Введите размер массива: ";
    cin >> n;

    cout << "Исходный массив: ";
    for (int i = 0; i < n; i++) {
        a[i] = rand() % 20;
        cout << a[i] << " ";
    }
    cout << endl;

    cout << "Введите значение для удаления: ";
    cin >> x;

    for (int i = 0; i < n; i++) {
        if (a[i] == x) {
            for (int j = i; j < n - 1; j++) {
                a[j] = a[j + 1];
            }
            n--;
            break;
        }
    }

    cout << "Введите K для сдвига вправо: ";
    cin >> k;

    if (n > 0) {
        for (int s = 0; s < k; s++) {
            int t = a[n - 1];
            for (int i = n - 1; i > 0; i--) {
                a[i] = a[i - 1];
            }
            a[0] = t;
        }
    }

    cout << "Полученный массив: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}