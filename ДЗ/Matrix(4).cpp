#include <iostream>
#include <clocale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru_RU.UTF-8");

    const int n = 3;
    int a[n][n];

    cout << "Введите 9 целых чисел:";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
    }
    cout << "Матрица: " << '\n';
    int max = a[0][0];
    int idi = 0;
    int idj = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
            if (max < a[i][j])
            {
                max = a[i][j];
                idi = i;
                idj = j;
            }
        }
        cout << '\n';
    }
    cout << "Максимальный элемент: " << max << "\ni = " << idi << "\nj = " << idj;
}