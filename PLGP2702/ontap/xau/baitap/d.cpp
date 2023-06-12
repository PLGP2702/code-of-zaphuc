#include <bits/stdc++.h>

using namespace std;
int main()
{
    string s;
    cout << "Nhap vao mot xau: ";
    getline(std::cin, s);

    bool isWord = true; // Biến đánh dấu xem đang xử lý một từ mới hay không
    for (size_t i = 0; i < s.length(); i++) {
        if (std::isspace(s[i])) { // Nếu gặp khoảng trắng hoặc dấu chấm thì đánh dấu là đang xử lý một từ mới
            isWord = true;
        } else {
            if (isWord) { // Nếu đang xử lý một từ mới thì chuyển đổi kí tự đầu tiên thành hoa
                s[i] = toupper(s[i]);
                isWord = false; // Đánh dấu là đang xử lý kí tự không phải đầu từ
            } else { // Nếu không phải đầu từ thì chuyển đổi kí tự thành thường
                s[i] = tolower(s[i]);
            }
        }
    }

    cout << "Xau sau khi chuyen doi: " << s << std::endl;

    return 0;
}