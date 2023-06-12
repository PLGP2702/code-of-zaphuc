#include <iostream>
#include <algorithm>
#include <cctype>

using namespace std;

int main() {
    string s;
    cout << "Nhap vao mot xau: ";
    getline(cin, s); // getline để nhập cả chuỗi chứa kí tự trắng

    s.erase(remove_if(s.begin(), s.end(), ::isspace), s.end()); // Xóa các ký tự trắng thừa

    cout << "Xau sau khi xoa: " << s << endl;

    return 0;
}