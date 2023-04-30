#include <iostream>
#include <fstream>
#include <ctime>
#include <cctype>

int main() {

    std::ofstream file("В хаті сонячний промінь косо.txt", std::ios::app);

    if (file.is_open()) {

        std::string content;
        std::ifstream infile("В хаті сонячний промінь косо.txt");
        std::getline(infile, content, '\0');
        infile.close();


        std::string word;
        for (auto c : content) {
            if (std::isspace(c)) {

                break;
            }
            word += c;
        }


        for (auto& c : word) {
            if (std::isupper(c)) {
                c = std::tolower(c);
            }
            else if (std::islower(c)) {
                c = std::toupper(c);
            }
        }


        file << word << std::endl;


        std::time_t now = std::time(nullptr);
        char timestamp[20];
        std::strftime(timestamp, sizeof(timestamp), "%Y-%m-%d %H:%M:%S", std::localtime(&now));
        file << "Дата дозапису: " << timestamp << std::endl;


        file.close();
    }
    else {
        std::cerr << "Не вдалося відкрити файл!\n";
        return 1;
    }

    return 0;
}

