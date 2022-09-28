#include <iostream>
#include <math.h>

using namespace std;

//abs(x) : tri tuyet doi 
//pow(a,b) : tinh a ^ b : tra ve so double
//sqrt(n) : tin can bac hai cua n : tra ve so double 
// round(a) : lam tron so
//100 > 50 : tue =>

// 0 : false
// #0 : true
int main(){
/*
    int n = 200;
    if((n >= 100) && (n <= 500)){
        cout << "so chan! \n";
    }
*/
/*
    int n; //0 la sai
    cin >> n;
    if((n % 2) == 0) {
        cout << "n la so chan !\n";      
    } else {
        cout << "la so le !\n";
    }
*/
    int n;
    cin >> n;
    if(n ==1){
        cout << "chu nhat\n";
    }
    else if(n == 2){
        cout << "thu hai\n";
    }
    else if(n == 3){
        cout << "thu ba\n";
    }
    else if(n == 4){
        cout << "thu tu\n";
    }
    else if(n == 5){
        cout << "thu nam\n";
    }
    else if(n == 6){
        cout << "thu sau"; 
    }
    else if(n == 7){
        cout << "thu 7";
    }
    else{
        cout << "du lieu khong hop le!";
    }
    return 0;  
}

