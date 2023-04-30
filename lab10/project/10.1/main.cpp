#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string poem = "", author = "Розробник: Литвин Єлизавета\ЦНТУ: Кропивницький, Україна\: 2023\n";
    string word = "вікна", simonenko = "Твої чорні шовкові коси\nПрипорошила вже сивина.";
    int lower_case_count = 0;


    ifstream fin("input.txt");
    if (fin.is_open()) {
        getline(fin, poem);
        fin.close();
    }
    else {
        cout << "Помилка відкриття файлу!\n";
        return 0;
    }


    for (int i = 0; i < word.length(); i++) {
        if (islower(word[i])) {
            lower_case_count++;
        }
    }


    if (simonenko.find(word) != string::npos) {
        poem += "\nСлово \"" + word + "\" з вхідного файлу є у вірші \"Матері\" Василя Симоненка.\n";
    }
    else {
        poem += "\nСлово \"" + word + "\" з вхідного файлу не зустрічається у вірші \"Матері\" Василя Симоненка.\
