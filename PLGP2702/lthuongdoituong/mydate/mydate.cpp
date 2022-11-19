#include<iostream>
using namespace std;

class MyDate{
    private:
        int ngay;
        int thang;
        int nam;
    public:
        MyDate()
        {
            this->ngay = this->thang = this->nam = 0;
        }
        MyDate(int ngay, int thang, int nam)
        {
            this->ngay = ngay;
            this->thang = thang;
            this->nam = nam;
        }
        friend istream &operator>>(istream &is, MyDate &md){
            cout<<"Day: "; is>>md.ngay;
            cout<<"Month: "; is>>md.thang;
            cout<<"Year: "; is>>md.nam;
            return is;
        }
        friend ostream &operator<<(ostream &os, MyDate &md){
            cout<<"Day: "<<md.ngay;
            cout<<"Month: "<<md.thang;
            cout<<"Year: "<<md.nam;
            return os;
        }
        int check(MyDate &md)
        {
            if(md.ngay>0 && md.ngay<32 && md.thang>0 && md.nam<13 && md.nam>0){
                return true;
            }
            else{
                return false;
            }
        }

        void upanddown(MyDate &md)
        {
            int n;
            cout<<"Nhap so ngay can tang: "; cin>>n;
            while(n>0){
                ngay+=n;
                if(ngay>31)
                {
                    ngay-=30;
                    thang++;
                }
                else if(thang>12)
                {
                    thang-=11;
                    nam++;
                }
            }
        }
        MyDate operator=(const MyDate &md)
        {
            ngay=md.ngay;
            thang=md.thang;
            nam=md.nam;
        }
        bool operator>(const MyDate &md)
        {
            if(this->ngay>md.ngay && this->thang>md.thang && this->nam>md.nam){
                return true;
            }
            else if(this->ngay>md.ngay && this->thang<md.thang && this->nam>md.nam){
                return true;
            }
            else if(this->ngay<md.ngay && this->thang<md.thang && this->nam>md.nam){
                return true;
            }
            else{
                return false;
            }
        }
        bool operator>=(const MyDate &md)
        {
            if(this->ngay>=md.ngay && this->thang>=md.thang && this->nam>=md.nam){
                return true;
            }
            else if(this->ngay>=md.ngay && this->thang<=md.thang && this->nam>=md.nam){
                return true;
            }
            else if(this->ngay<=md.ngay && this->thang<=md.thang && this->nam>=md.nam){
                return true;
            }
            else{
                return false;
            }
        }
        bool operator<(const MyDate &md)
        {
            if(this->ngay<md.ngay && this->thang<md.thang && this->nam<md.nam){
                return true;
            }
            else if(this->ngay<md.ngay && this->thang>md.thang && this->nam<md.nam){
                return true;
            }
            else if(this->ngay>md.ngay && this->thang>md.thang && this->nam<md.nam){
                return true;
            }
            else{
                return false;
            }
        }
        bool operator<=(const MyDate &md)
        {
            if(this->ngay<=md.ngay && this->thang<=md.thang && this->nam<=md.nam){
                return true;
            }
            else if(this->ngay<=md.ngay && this->thang>=md.thang && this->nam<=md.nam){
                return true;
            }
            else if(this->ngay>=md.ngay && this->thang>=md.thang && this->nam<=md.nam){
                return true;
            }
            else{
                return false;
            }
        }
        /// @brief 
        /// @param md 
        /// @return 
        bool &operator==(const MyDate &md){
            if(this->ngay==md.ngay && this->thang==md.thang && this->nam==md.nam){
                return true;
            }
            else{
                return false;
            }
        }
        /// @brief 
        /// @param md 
        /// @return 
        bool &operator==(const MyDate &md){
            if(this->ngay!=md.ngay && this->thang!=md.thang && this->nam!=md.nam){
                return true;
            }
            else{
                return false;
            }
        }
        int getter_year(){
            return nam;
        }
};

void swap(MyDate arr[], int n){
    for(int i=0; i<n; i++){
        for(int j=i+1; j<i; j++){
            if(arr[i].getter_year()>arr[j].getter_year()){
                int tmp=arr[i].getter_year();
                arr[i].getter_year()==arr[j].getter_year();
                arr[i].getter_year()==tmp;
            }
        }
    }
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
}

int main(){
    int n;
    cout<<"Nhap vao phan tu mang: "; cin>>n;
    MyDate*arr=new MyDate[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    swap(arr, n);
}