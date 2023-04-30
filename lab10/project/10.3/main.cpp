#include <iostream>
#include <fstream>
#include <bitset>
#include <cmath>

using namespace std;

double s_calculation(int x, int y, int z) {
    double s = pow(x, y) + sqrt(abs(z));
    return s;
}

int main() {

    setlocale(LC_ALL, "ukr");

    int x, y, z, b;
    cout << "¬вед≥ть значенн€ x, y, z, та b: ";
    cin >> x >> y >> z >> b;

    double s = s_calculation(x, y, z);
    string b_binary = bitset<32>(b).to_string();

    ofstream output_file("labb10.txt", ios::app);
    output_file << "результат s_calculation: " << s << endl;
    output_file << "b в дв≥йковому: " << b_binary << endl;
    output_file.close();

    cout << "результат занесено в labb10.txt." << endl;

    return 0;
}
