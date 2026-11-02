#include <iostream>
#include <cstdlib>
#include <clocale>
using namespace std;

int main() {
    setlocale (LC_ALL, "ru_RU.UTF-8");

    int m, n;
    cout << "Введите начальное значение m: ";
    cin >> m;
    cout << "Введите начальное значение n: ";
    cin >> n;
    
    int res1 = ++n * ++m;
    cout << "1) ++n * ++m = " << res1 << " (Теперь m=" << m << ", n=" << n << ")" << endl;
    
    bool res2 = m++ < n;
    cout << "2) m++ < n = " << res2 << " (Теперь m=" << m << ", n=" << n << ")" << endl;
    
    bool res3 = n++ > m;
    cout << "3) n++ > m = " << res3 << " (Теперь m=" << m << ", n=" << n << ")" << endl;

    return 0;
}