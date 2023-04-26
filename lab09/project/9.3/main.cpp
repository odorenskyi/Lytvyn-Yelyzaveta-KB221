#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "������ ����� N (�� 0 �� 9008000): ";
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
        cout << "ʳ������ " << (count == 0 ? "����" : "�������") << " � ���� N: " << count << endl;
    } else {
        cout << "������ �������� ����� N." << endl;
    }

    return 0;
}
