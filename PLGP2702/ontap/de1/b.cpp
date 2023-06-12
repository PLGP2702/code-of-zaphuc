#include <iostream>

using namespace std;

int main() {
    string s;
    cout << "Nhap mot xau ki tu: ";
    getline(cin, s);

    cout << "Cac ki tu chu so 3 trong xau la: ";
    for (char c : s) {
        if (c == '3') {
            cout << c << " ";
        }
    }

    return 0;
}