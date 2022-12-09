#include <bits/stdc++.h>

using namespace std;

class MyAttr
{
    private:
        int sohieu;
    public:
        MyAttr(int SH = 0)
        {
            sohieu = SH;       
        }
        void display()
        {
            cout << "\n So hieu cua tep la: " << sohieu;
        }
};

class Mydate
{
    private:
        int ngay, thang, nam;
    public:
        Mydate(int ngay = 1, int thang = 1, int nam = 1980)
        {
            ngay = ngay;
            thang = thang;
            nam = nam;
        }
        void in()
        {
            cout << ngay << "-" << thang << "-" << nam;
        }
        int operator > (Mydate &a)
        {
            if(nam > a . nam)
            {
                return 1;
            }
            if((nam == a . nam) && (thang > a . thang))
            {
                return 1;
            }
            if((nam == a.nam) && (thang > a.thang) && (ngay > a.ngay))
            {
                return 1;
            }
            else 
                return 0;
        }
};

class Myfile:public MyAttr, public Mydate
{
    private:
        char *name;
        int size;
    public:
        Myfile(int SH = 0,int ngay = 1, int thang = 1, int nam = 1980, char *n = NULL, int s = 0):MyAttr(SH), Mydate(ngay, thang, nam)
        {
            name = strdup(n);
            size = s;
        }
        void display()
        {
            cout << "\nTen tep: " << name;
            cout << "\nKich thuoc: " << size;
            MyAttr::display();
            cout << "\nThoi gian: "; Mydate::in();
        }
};

int main()
{
    Myfile *a[4],*tg;
	int at,s, ngay, thang, nam;
	char ten[255];
	cout<<"\n Nhap thong tin cho tep:";
	for(int i=0;i<3;i++)
	{
	cout<<"\n Doi tuong thu "<< i + 1 << " : ";
	cout<<"\n Ten tep:";fflush(stdin);gets(ten);
	cout<<"\n Kich thuoc tep:";cin>>s;
	cout<<"\n Nhapthoi gian:"; cin >> ngay >> thang >> nam;
	cout<<"\n Nhap so hieu:"; cin >> at;
	a[i]=new Myfile[a , ngay, thang , nam, ten,s];
	}
	cout<<"\n ====Xem tep truoc khi sap xep:====";
    for(int i=0;i<3;i++){
		cout<<"\n doi tuong thu"<<i+1<<" :"; a[i]->display();}
	for(int i=0;i<2;i++)
		for(int j=i+1;j<3;j++)
			if(*a[i]>*a[j])
			{tg=a[i];a[i]=a[j];a[j]=tg;}
			cout<<"\n ===== Xem tep sau khi sap xep =====";
		for(int i=0;i<3;i++){
			cout<<"\n doi tuong thu"<<i+1<<": "; a[i]->display();
        }
}