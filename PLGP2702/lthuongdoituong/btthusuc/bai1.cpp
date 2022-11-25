#include <bits/stdc++.h>
using namespace std;

class Nguoi{
	private:
		string _HoDem,_Ten,_NgaySinh;
		int ngay, thang, nam;
	public:
		string getHoDem();
		string getTen();
		string getNgaySinh();
		void Nhap();
		void Xuat();
		bool operator > (Nguoi nguoi); //So sanh theo ngay sinh
		
};
string Nguoi::getHoDem(){
	return _HoDem;
}
string Nguoi::getTen(){
	return _Ten;
}
string Nguoi::getNgaySinh(){
	return _NgaySinh;
}
void Nguoi::Nhap(){
	cout<<"Nhap ho dem: ";
	cin.ignore();
	getline(cin, _HoDem);
	cout<<"Nhap ten: ";
	getline(cin, _Ten);
	cout<<"Nhap ngay sinh: ";
	getline(cin, _NgaySinh);
}
void Nguoi::Xuat(){
	cout<<_HoDem<<" "<<_Ten<<" "<<_NgaySinh;
}
bool Nguoi::operator > (Nguoi nguoi){
	string t1 = _Ten +_HoDem;
	string t2 = nguoi._Ten + nguoi._HoDem;
	
	return (t1>t2);
}

class Sinhvien : public Nguoi{
	private:
		string _MaSinhVien;
		float _DiemTrungBinh;
	public:
		string getMaSinhVien();
		float getDiemTrungBinh();
		void Nhap();
		void Xuat();
};
string Sinhvien::getMaSinhVien()
{
	return _MaSinhVien;
}
float Sinhvien::getDiemTrungBinh()
{
	return _DiemTrungBinh;
}
void Sinhvien::Nhap()
{
	Nguoi::Nhap();
	cout<<"Nhap ma sinh vien: ";
	getline(cin,_MaSinhVien);
	cout<<"Nhap diem trung binh: ";
	cin>>_DiemTrungBinh;	
}
void Sinhvien::Xuat()
{
	Nguoi::Xuat();
	cout<<" ** "<<_MaSinhVien<<" #### "<<_DiemTrungBinh;
}

int main()
{
	int n,i,j;
	Sinhvien sv[200],temp;
	float maxDiem;
	
	cout<<"Nhap so luong sinh vien: ";
	cin>>n;
	for (i=0;i<n;i++){
		sv[i].Nhap();
	}
		
	for (i=0;i<n;i++)
	{
		sv[i].Xuat();
		cout<<endl;
	}
	for (i=0;i<n-1;i++)
		for (j=i+1;j<n;j++)
		if (sv[i]>sv[j])
		{
			temp = sv[i];
			sv[i]=sv[j];
			sv[j]=temp;
		}
	for (i=0;i<n;i++)
	{
		sv[i].Xuat();
		cout<<endl;
	}
	maxDiem=0;
	for (i=0;i<n;i++)
	if (maxDiem < sv[i].getDiemTrungBinh())
		maxDiem = sv[i].getDiemTrungBinh();
		
	for (i=0;i<n;i++)
	if (maxDiem == sv[i].getDiemTrungBinh()){
		sv[i].Xuat();
	}	
}
// class Nguoi
// {
//     private:
//         string HoDem;
//         string NgaySinh;
//         string Ten;
//     public:
//         Nguoi()
//         {
//             this->HoDem = this->NgaySinh = this->Ten ="";
//         }

//         Nguoi(string HoDem, string NgaySinh, string Ten)
//         {
//             this-> HoDem = HoDem;
//             this-> NgaySinh = NgaySinh;
//             this-> Ten = Ten;
//         }
        
//         ~Nguoi()
//         {
//             this->HoDem = this->NgaySinh = this->Ten ="";
//         }

//         void Nhap()
//         {
//             cout << "\nNhap HoDem: "; fflush(stdin); getline(cin, HoDem);
//             cout << "\nNhap Ngaysinh: "; fflush(stdin); getline(cin, NgaySinh);
//             cout << "\nNhap Ten: "; fflush(stdin); getline(cin, Ten);
//         }

//         void Xuat()
//         {
//             cout << "\nHoDem: " << HoDem;
//             cout << "\nNgaySinh: " << NgaySinh;
//             cout << "\nTen: " << Ten;
//         }
// };

class SinhVien : public Nguoi
{
    private:
        /// @brief 
        string Msv;
        float Dtb;
    public:
        string getlineMsv();
        float getlineDtb();
        void Nhap();
        void Xuat();
        // SinhVien()
        // {
        //     this->Msv = "";
        //     this->Dtb = 0;
        // }

        // SinhVien(string Msv, float Dtb)
        // {
        //     this->Msv = Msv;
        //     this->Dtb = Dtb;
        // }

        // ~SinhVien()
        // {
        //    this->Dtb = this->Msv = "";
        // }
        
        // void Nhap()
        // {
        //     Nguoi::Nhap();
        //     cout << "\nNhap Msv: "; fflush(stdin); getline(cin, Msv)
        //     cout << "\nNhap Dtb: "; fflusj(stdin); getline(cin, Dtb);
        // }

        // void Xuat()
        // {
        //     Nguoi::Xuat();
        //     cout << "\nMsv: " << Msv;
        //     cout << "\nDtb: " << Dtb;
        // }

        // bool operator>(SinhVien &student)
        // {
        //     if(this->Msv > student.Msv && this->Dtb > student.Dtb)
        //     {
        //         return true;
        //     }
        //     else
        //     {
        //         return false;
        //     }
        // }
};

string SinhVien::getlineMsv()
{
    return Msv;
}

float SinhVien::getlineDtb()
{
    return Dtb;
}

void SinhVien::Nhap()
{
    Nguoi::Nhap();
    cout << "Ma sinh vien: ";
    getline(cin, Msv);
    cout << "Nhap diem trung binh: ";
    cin >> Dtb;
}
 
void Sinhvien::Xuat()
{
    Nguoi::Xuat();
    cout << "-=-" << Msv << "===" << Dtb;
}
 
int main()
{
    int n, i , j;
    Sinhvien sv[200];
    cout << "Nhap so luong sinh vien: ";
    cin >> n;
    for(i = 0; i < n; i++)
    {
        sv[i].Nhap();
    }
    for(i = 0; i < n; i++)
    {
        sv[i].Xuat();
        cout << endl;
    }
    for(i = 0; i < 0; i ++)
    {
        for(j = i + 1; j < n; j++)
        {
            temp = sv[i];
            sv[i] = sv[j];
            sv[j] = temp;
        }
    }
};