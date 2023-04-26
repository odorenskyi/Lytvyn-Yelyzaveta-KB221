#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Введіть число N (від 0 до 9008000): ";
    cin >> N;

    int count;
    if ((N & (1 << 13)) == 0) {
        count = 0;
        while (N > 0) {
            if ((N & 1) == 0) {
                count++;
            }
            N >>= 1;
        }
    } else {
        count = 0;
        while (N > 0) {
            if ((N & 1) == 1) {
                count++;
            }
            N >>= 1;
        }
    }

    if ((N >= 0) && (N <= 9008000)) {
        cout << "Кількість " << (count == 0 ? "нулів" : "одиниць") << " у числі N: " << count << endl;
    } else {
        cout << "Невірне значення числа N." << endl;
    }

    return 0;
}
