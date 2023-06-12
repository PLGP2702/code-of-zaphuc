#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cout << "Nhap vao mot xau: ";
    getline(std::cin, s);

    for (char& c : s) {
        c = tolower(c);
    }

    cout << "Xau sau khi chuyen thanh ki tu thuong: " << s << '\n';

    return 0;
}
/*Trong đó, vòng lặp for dùng để duyệt qua từng kí tự trong xâu s. 
Biến c sẽ lưu trữ kí tự hiện tại đang được xét. Hàm std::tolower() dùng để chuyển đổi kí tự in hoa thành kí tự thường. 
Cuối cùng, ta hiển thị kết quả sau khi chuyển đổi xâu thành kí tự thường.
*/




