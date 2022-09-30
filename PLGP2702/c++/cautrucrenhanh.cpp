#include <iostream>
#include <math.h>

using namespace std;

//abs(x) : tri tuyet doi 
//pow(a,b) : tinh a ^ b : tra ve so double
//sqrt(n) : tin can bac hai cua n : tra ve so double 
// round(a) : lam tron so
//100 > 50 : true =>

// 0 : false
// #0 : true
int main(){
    // int n = 200;
    // if((n >= 100) && (n <= 500)){
    //     cout << "so chan! \n";
    // }
/* //so chan so le
    int n; //0 la sai
    cin >> n;
    if((n % 2) == 0) {
        cout << "n la so chan !\n";      
    } else {
        cout << "la so le !\n";
    }
*/
/* //day
    int n;
    cin >> n;
    if(n == 1){
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
*/
/* //month
    int n; 
    cin >> n;
    if((n == 1) || (n == 3) || (n == 5) || (n == 7) || (n == 8) || (n == 10) || (n == 12)){
        cout << "Thang co 31ngay\n";
    }
    else if((n == 4) || (n == 6) || (n == 9 ) || (n == 11)){
        cout << "Thang co 30 ngay\n";
    }
    else if(n == 2){
        cout << "Thang co 28 ngay\n";
    }
    else{
        cout << "du lieu khong hop le!!";
    }
*/
/* //day
    int n;
    cin >> n;
    switch (n) {
        case 1:
            cout << "Monday";
            break;
        case 2:
            cout << "Tuesday";
            break;
        case 3:
            cout << "Wednesday";
            break;
        case 4:
            cout << "Thursday";
            break;
        case 5:
            cout << "Friday";
            break;
        case 6:
            cout << "Saturday";
            break;
        case 7:
            cout << "Sunday";
            break;
            default:
            cout <<"du lieu khong hop le!!!";
        }
*/
/* //switch case
    int n; cin >> n;
    switch (n)
    {
    case 1 : case 3 : case 5 : case 7 : case 8 : case 10 : case 12:
        printf("31 ngay\n");
        break;
    case 4 : case 6 : case 9 : case 11:
        printf("30 ngay\n");
        break;
    case 2:
        printf("28 ngay\n");
        break;
    default:
        printf("du lieu khong hop le!");
    }
*/        
    return 0;  
}

