#include<iostream>
using namespace std;

int UCLN(int a, int b) {
	while (a != b) {
		if (a > b) {
			a -= b;
		}
		else {
			b -= a;
		}
	}
	return b;
}
class Phanso {
private:
	int tu ;
	int mau ;
	void rutgon() {
		int uc = UCLN(tu, mau);
		tu = tu / uc;
		mau = mau / uc;
	}
public:
	Phanso() {
		tu = 0;
		mau = 1;
	}
	~Phanso() {
		tu = 0;
		mau = 1;
	}
	void nhapPS() {
		cout << "nhap tu so: "; cin >> tu;
		cout << "nhap mau so: "; cin >> mau;
	}
	void xuatPS() {
		cout << tu << "/" << mau << endl;
	}
	void cong(Phanso ps1, Phanso ps2) {
		tu = ps1.tu * ps2.mau + ps1.mau * ps2.tu;
		mau = ps1.mau * ps2.mau;
		rutgon();
	}
	void tru(Phanso ps1, Phanso ps2) {
		tu = ps1.tu * ps2.mau - ps1.mau * ps2.tu;
		if (tu < 0) {
			cout << tu << "/" << mau << endl;
		}
		mau = ps1.mau * ps2.mau;
		rutgon();
	}
	void nhan(Phanso ps1, Phanso ps2) {
		tu = ps1.tu * ps2.tu;
		mau = ps1.mau * ps2.mau;
		rutgon();
	}
	void chia(Phanso ps1, Phanso ps2) {
		tu = ps1.tu * ps2.mau;
		mau = ps1.mau * ps2.tu;
		rutgon();
	}
};

int main() {
	Phanso ps1, ps2, ps3;
	ps1.nhapPS(); ps2.nhapPS();
	ps3.cong(ps1, ps2); ps3.xuatPS();
	ps3.nhan(ps1, ps2); ps3.xuatPS();
	ps3.chia(ps1, ps2); ps3.xuatPS();
	ps3.tru(ps1, ps2); ps3.xuatPS();
	return 0;
}


