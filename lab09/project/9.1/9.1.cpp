#include <iostream>
using namespace std;

int main() {
    double deposit, interest_rate, total_interest;
    int months;

    // ��� �����
    cout << "������ ���� ��������: ";
    cin >> deposit;
    cout << "������ ����� 䳿 �������� (� ������): ";
    cin >> months;

    // ���������� ��������� ������ �� �������� ���� �������
    if (months == 6) {
        interest_rate = 0.16;
    } else if (months == 12) {
        interest_rate = 0.18;
    } else {
        cout << "������ �������� ����� 䳿 ��������" << endl;
        return 0;
    }
    total_interest = deposit * interest_rate * months / 12;

    // ��������� ����������
    cout << "�������� ���� ������� �� ���� ����� 䳿 ��������: " << total_interest << " ���." << endl;
    cout << "���� ��������� ������ �������:" << endl;

    // ���������� �������� ������� ������� �� ��������� ����������
    for (int i = 1; i <= months; i++) {
        double monthly_interest_payment = deposit * interest_rate / 12;
        cout << "̳���� " << i << ": " << monthly_interest_payment << " ���." << endl;
        deposit += monthly_interest_payment;
    }

    return 0;
}

