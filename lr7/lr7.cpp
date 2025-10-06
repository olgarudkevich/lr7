#include <iostream>
#include <windows.h>
using namespace std;

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    const int n = 5;
    int a[n][n];
    int sum = 0;

    cout << "Введіть елементи матриці 5x5:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i][j] > 0) {
                sum += a[i][j];
            }
        }
    }

    cout << "Сума додатних елементів над головною діагоналлю = " << sum << endl;

    return 0;
}
