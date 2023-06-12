#include <iostream>
#include <cstring>

using namespace std;

int main() {
    string s;
    cout << "Nhap vao mot xau s: ";
    getline(cin, s);

    int count = 0;
    int n = s.length();
    for (int i = 0; i < n; i++) {
        if (isupper(s[i])) {
            count++;
        }
    }

    cout << "So luong ky tu in hoa la: " << count << endl;

    return 0;
}