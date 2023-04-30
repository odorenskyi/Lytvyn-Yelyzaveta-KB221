#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string poem = "", author = "���������: ������ ���������\����: �������������, ������\: 2023\n";
    string word = "����", simonenko = "��� ���� ������ ����\n����������� ��� ������.";
    int lower_case_count = 0;


    ifstream fin("input.txt");
    if (fin.is_open()) {
        getline(fin, poem);
        fin.close();
    }
    else {
        cout << "������� �������� �����!\n";
        return 0;
    }


    for (int i = 0; i < word.length(); i++) {
        if (islower(word[i])) {
            lower_case_count++;
        }
    }


    if (simonenko.find(word) != string::npos) {
        poem += "\n����� \"" + word + "\" � �������� ����� � � ���� \"�����\" ������ ���������.\n";
    }
    else {
        poem += "\n����� \"" + word + "\" � �������� ����� �� ����������� � ���� \"�����\" ������ ���������.\
