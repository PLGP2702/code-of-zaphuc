#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cout << "Nhap vao mot xau s: ";
    getline(cin, s);

    int wordCount = 0;
    for (int i = 0; i < s.length(); i++) {
        // Nếu gặp ký tự khác space thì tăng biến đếm lên 1
        if (s[i] != ' ' && (i == 0 || s[i - 1] == ' ')) {
            wordCount++;
        }
    }

    cout << "So tu trong xau la: " << wordCount << endl;

    return 0;
}