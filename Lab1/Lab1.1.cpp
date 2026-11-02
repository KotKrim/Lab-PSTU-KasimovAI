#include <iostream>
#include <cmath>
#include <clocale>
using namespace std;

int main() {
    setlocale(LC_ALL, "ru_RU.UTF-8");

    float a_f = 100.0;
    float b_f = 0.001;
    
    float num1_f = pow(a_f + b_f, 4);
    float num2_f = pow(a_f, 4) + 4 * pow(a_f, 3) * b_f;
    float num_f = num1_f - num2_f;
    
    float den1_f = 6 * pow(a_f, 2) * pow(b_f, 2);
    float den2_f = 4 * a_f * pow(b_f, 3);
    float den3_f = pow(b_f, 4);
    float den_f = den1_f + den2_f + den3_f;
    
    float res_f = num_f / den_f;
    cout << "Результат (float): " << res_f << endl;

    double a_d = 100.0;
    double b_d = 0.001;
    
    double num1_d = pow(a_d + b_d, 4);
    double num2_d = pow(a_d, 4) + 4 * pow(a_d, 3) * b_d;
    double num_d = num1_d - num2_d;
    
    double den1_d = 6 * pow(a_d, 2) * pow(b_d, 2);
    double den2_d = 4 * a_d * pow(b_d, 3);
    double den3_d = pow(b_d, 4);
    double den_d = den1_d + den2_d + den3_d;
    
    double res_d = num_d / den_d;
    cout << "Результат (double): " << res_d << endl;
   return 0;
}