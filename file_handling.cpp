#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file("info.txt");
    file << "Name: Kidanemariam\n";
    file << "University: Addis Ababa University\n";
    file << "Field: Software Development\n";
    file.close();

    ifstream readFile("info.txt");
    string line;
    while (getline(readFile, line)) {
        cout << line << endl;
    }
    readFile.close();

    return 0;
}
