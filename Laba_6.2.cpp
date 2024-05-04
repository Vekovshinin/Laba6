#include <iostream>
using namespace std;

int fibo(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    if (n > 1) return fibo(n - 1) + fibo(n - 2);
}
int main()
{
    setlocale(LC_ALL, "Ru");
    int n;
    cout << "Введите количество чисел фибоначчи: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << fibo(i) << ' ';
    }
    return 0;
}
