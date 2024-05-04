#include <iostream>
using namespace std;
int fact(int f) {
    if (f < 0) return 0;
    if (f == 0) return 1;
    if (f > 0) return f * fact(f - 1);
}
double f(int n, int x) {
    if (n == 0) return x;
    double s = f(n - 1, x) + pow(x, (2 * n + 1)) / fаct(2 * n + 1);
    return s;// оператор условия
}
int main()
{
    setlocale(LC_ALL, "Ru");
    int n;
    double x;
    cout << "Введите количество членов в последовательности: ";
    cin >> n;
    cout << "Введите первый член последовательности: ";
    cin >> x;
    double x1 = x;
    double s = 0;
    for (int i = 1; i <= n; i++) {
        s += x;
        x = pow(x, 2 * i + 1) / fact(i * 2 + 1);
    }
    cout << endl << "Сумма всех чисел последовательности при вычислении на прямую: " << s;
    cout << endl << "Сумма всех чисел последовательности при вычислении через рекурсию: " << f(n, x1);

    return 0;
}
