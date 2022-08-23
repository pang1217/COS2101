/*
input
presentdate:  day month year
birthdate:  day month year
output
distance between presentday and birthday : day month year
*/
/*
1 year = 12 month
1 month = 30 day
*/
#include<iostream>
using namespace std;
void Input(int&, int&, int&); // call 2
void FindDistance(int, int, int, int, int, int, int&, int&, int&); //call 1 no return but resulst passby reference
void Output(int, int, int); // call 1

int main(){
    int P_Day, P_Month, P_Year; //Present
    int B_Day, B_Month, B_Year; //BirthDay
    int D_Day, D_Month, D_Year; //Distance
    cout << "Present Day." << endl;
    Input(P_Day, P_Month, P_Year);
    cout << "BirthDay." << endl;
    Input(B_Day, B_Month, B_Year);
    FindDistance(P_Day, P_Month, P_Year, B_Day, B_Month, B_Year, D_Day, D_Month, D_Year);
    Output(D_Day, D_Month, D_Year);
    return 0;
}

void Input(int& d, int& m, int& y){
    cout << "Put Day -> Month -> Year : ";
    cin >> d >> m >> y;
}

void FindDistance(int P_d, int P_m, int P_y, int B_d, int B_m, int B_y, int& D_d, int& D_m, int& D_y){
    D_d = P_d - B_d;
    if (D_d < 0){
        P_m -= 1;
        P_d += 30;
        D_d = P_d - B_d;
    }
    D_m = P_m - B_m;
    if (D_m < 0){
        P_y -= 1;
        P_m += 12;
        D_m = P_m - B_m;
    }
    D_y = P_y - B_y;
}

void Output(int d, int m, int y){
    cout << "Distance between Present Day and BirthDay is : ";
    cout << d << " Day " << m << " Month " << y << " Year" <<endl;
}