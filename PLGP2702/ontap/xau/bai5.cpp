#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main() {
    string s;
    cout << "Nhap vao mot xau s: ";
    getline(cin, s);  // sử dụng getline() để nhận xâu có khoảng trắng

    int n = s.length();
    for (int i = 0; i < n; i++) {
        if (isupper(s[i])) {
            s[i] = tolower(s[i]);
        }
    }

    cout << "Xau s sau khi chuyen: " << s << endl;

    return 0;
}