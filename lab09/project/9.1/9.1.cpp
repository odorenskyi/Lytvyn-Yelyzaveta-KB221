#include <iostream>
using namespace std;

int main() {
    double deposit, interest_rate, total_interest;
    int months;

    // Ввід даних
    cout << "Введіть суму депозиту: ";
    cin >> deposit;
    cout << "Введіть строк дії договору (в місяцях): ";
    cin >> months;

    // Розрахунок відсоткової ставки та загальної суми відсотків
    if (months == 6) {
        interest_rate = 0.16;
    } else if (months == 12) {
        interest_rate = 0.18;
    } else {
        cout << "Невірно введений строк дії договору" << endl;
        return 0;
    }
    total_interest = deposit * interest_rate * months / 12;

    // Виведення результатів
    cout << "Загальна сума відсотків за весь строк дії договору: " << total_interest << " грн." << endl;
    cout << "Сума щомісячних виплат відсотків:" << endl;

    // Розрахунок щомісячної виплати відсотків та виведення результатів
    for (int i = 1; i <= months; i++) {
        double monthly_interest_payment = deposit * interest_rate / 12;
        cout << "Місяць " << i << ": " << monthly_interest_payment << " грн." << endl;
        deposit += monthly_interest_payment;
    }

    return 0;
}

