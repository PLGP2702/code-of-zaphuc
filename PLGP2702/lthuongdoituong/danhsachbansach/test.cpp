#include<iostream>
using namespace std;
#include<string>

class Media{
    private:
        string tengoi;
        int giaban;
    public:
        //khởi tạo
        Media(){
            this->tengoi="";
            this->giaban=0;        
        }
        void nhapdulieu(){
            cout<<"\nNhap ten goi: "; fflush(stdin);getline(cin, this->tengoi);
            cout<<"\nNhap gia ban: "; cin>>this->giaban;
        }
        void xuatdulieu(){
            cout<<"\nTen goi la: "<<this->tengoi;
            cout<<"\nGia ban la: "<<this->giaban;
        }
};

class Book : public Media{
    private:
        int sotrang;
        string tacgia;
    public:
        Book(){
            this->sotrang=0;
            this->tacgia="";
        }
        void nhapdulieu(){
            Media::nhapdulieu();
            cout<<"\nNhap so trang: "; cin>>this->sotrang;
            cout<<"\nNhap ten tac gia: "; fflush(stdin); getline(cin, this->tacgia);
        }
        void xuatdulieu(){
            Media::xuatdulieu();
            cout<<"\nSo trang: "<<this->sotrang;
            cout<<"\nTen tac gia: "<<this->tacgia<<endl;
        }
        bool operator>(const Book &book){
            if(this->sotrang>book.sotrang){
                return true;
            }
            else{
                return false;
            }
        }
        int getter_sotrang(){
            return this->sotrang;
        }
};

void xuat_ds_book(Book ds_book[], int n){
    int dem=1;
    cout<<"\n\t\tDanh sach cac cuon sach\n";
    for(int i=0; i<n; i++){
        cout<<"\nThong tin sach thu "<<dem++;
        ds_book[i].xuatdulieu();
    }
}

void swapbook(Book ds_book[], int n){
    for(int i=0; i<n; i++){
        for(int j=i+1; j<i; j++){
            if(ds_book[i].getter_sotrang()>ds_book[j].getter_sotrang()){
                int tg=ds_book[i].getter_sotrang();
                ds_book[i].getter_sotrang()==ds_book[j].getter_sotrang();
                ds_book[j].getter_sotrang()==ds_book[i].getter_sotrang();
            }
        }
    }
    for(int i=0; i<n; i++){
        ds_book[i].xuatdulieu();
    }
}

class Video : public Media{
    private:
        int thoigianchay;
        string nhasx;
    public:
        Video(){
            this->thoigianchay=0;
            this->nhasx="";
        }
        void nhapdulieu(){
            Media::nhapdulieu();
            cout<<"\nNhap thoi gian chay: "; cin>>this->thoigianchay;
            cout<<"\nNhap nha san xuat: "; fflush(stdin); getline(cin, this->nhasx);
        }
        void xuatdulieu(){
            Media::xuatdulieu();
            cout<<"\nThoi gian chay: "<<this->thoigianchay;
            cout<<"\nNha san xuat: "<<this->nhasx;
        }
        bool operator>(Video &video){
            if(this->thoigianchay>video.thoigianchay){
                return true;
            }
            else{
                return false;
            }
        }
        int getter_thoigianchay(){
            return this->thoigianchay;
        }
};

void xuat_ds_video(Video ds_video[], int m){
    int dem=1;
    cout<<"\n\n\t\tDanh sach cac cuon bang\n";
    for(int i=0; i<m; i++){
        cout<<"\n\tThong tin video thu "<<dem++<<endl;
        ds_video[i].xuatdulieu();
    }
}

void swapvideo(Video ds_video[], int m){
    for(int i=0; i<m; i++){
        for(int j=i+1; j<i; j++){
            if(ds_video[i].getter_thoigianchay()>ds_video[j].getter_thoigianchay()){
                int tg=ds_video[i].getter_thoigianchay();
                ds_video[i].getter_thoigianchay()==ds_video[j].getter_thoigianchay();
                ds_video[j].getter_thoigianchay()==tg;
            }
        }
    }
    for(int i=0; i<m; i++){
        ds_video[i].xuatdulieu();
    }
}

void menu(Book ds_book[], int n, Video ds_video[], int m){
    int luachon;
    while(true){
        system("cls");
        cout<<"\n\n\t\t===============QUAN LY MUC BAN SACH===============";
        cout<<"\n\t1. Nhap danh sach book";
        cout<<"\n\t2. Nhap danh sach video";
        cout<<"\n\t3. Xuat danh sach book";
        cout<<"\n\t4. Xuat danh sach video";
        cout<<"\n\t5. Sap xep cac cuon sach theo thu tu tang dan cua so trang";
        cout<<"\n\t6. Sap xep cac cuon bang theo thu tu tang dan cua thoi gian chay";
        cout<<"\n\t0. Thoat";
        cout<<"\n\t\t=======================END========================";

        cout<<"\nNhap lua chon: "; cin>>luachon;
        if(luachon==1){
            Book x;
            x.nhapdulieu();
            ds_book[n]=x;
            n++;
            system("pause");
        }
        else if(luachon==2){
            Video y;
            y.nhapdulieu();
            ds_video[m]=y;
            m++;
            system("pause");
        }
        else if(luachon==3){
            xuat_ds_book(ds_book, n);
            system("pause");
        }
        else if(luachon==4){
            xuat_ds_video(ds_video, m);
            system("pause");
        }
        else if(luachon==5){
            swapbook(ds_book, n);
            system("pause");
        }
        else if(luachon==6){
            swapvideo(ds_video, m);
            system("pause");
        }
        else if(luachon==0){
            break;
        }
    }
}

int main(){
    Book ds_book[100];
    int n=0;
    Video ds_video[100];
    int m=0;
    menu(ds_book, n, ds_video, m);
    return 0;
}