#include <iostream>
#include <fstream>

using namespace std;

int main() {
    string text;
    int key;

    cout << "Matn kiriting: ";
    getline(cin, text);

    cout << "Key kiriting: ";
    cin >> key;

    for (char &c : text) {
        c = c + key;
    }

    ofstream file("encrypted.txt");
    file << text;
    file.close();

    cout << "Encrypted text saved to encrypted.txt\n";

    return 0;
}
