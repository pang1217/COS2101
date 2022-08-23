// Deposit interest 3months, 6months, 1year.
#include<iostream>
using namespace std;
// 1Year Done
float findInterest_1Year(float, float);
float findCompound_1Year(float, float);
// 6M
float findInterest_6Month(float, float);
float findCompound_6Month(float, float);
// 3M
float findInterest_3Month(float, float);
float findCompound_3Month(float, float);

int main(){
    float deposit, interest, rate;
    float compound_1Year, compound_3Month, compound_6Month;

    cout << "Please enter your Deposit : "; cin >> deposit;
    cout << "Please enter your Rate (per/year) : "; cin >> rate;
    // 1 years
    interest = findInterest_1Year(deposit, rate);
    compound_1Year = findCompound_1Year(deposit, interest);
    cout << "\n1 Year." << endl;
    cout << "Deposit : " << deposit << endl;
    cout << "Interest : " << interest << endl;
    cout << "Compound interest : " << compound_1Year << endl;  
    // 6 month
    interest = findInterest_6Month(deposit, rate);
    compound_6Month = findCompound_6Month(deposit, interest);
    cout << "\n6 Month." << endl;
    cout << "Deposit : " << deposit << endl;
    cout << "Interest : " << interest << endl;
    cout << "Compound interest : " << compound_6Month << endl; 
    // 3 month
    interest = findInterest_3Month(deposit, rate);
    compound_3Month = findCompound_3Month(deposit, interest);
    cout << "\n3 Month." << endl;
    cout << "Deposit : " << deposit << endl;
    cout << "Interest : " << interest << endl;
    cout << "Compound interest : " << compound_3Month << endl;  
    return 0;
}

// 1Year Done
float findInterest_1Year(float d, float r){
    return r / 100 * d; // return 1 year
}
float findCompound_1Year(float d, float i){
    return d+i;
}

// 6M 
float findInterest_6Month(float d, float r){
    int i6, i12;
    float m;
    i6 = r / 2 / 100 * d; // 6M
    m = d + i6;
    i12 = r / 2 / 100 * m; // 12M
    return (i6 + i12); // return interest 6 month
}
float findCompound_6Month(float d, float i){
    return d+i; // return compound
}

// 3M
float findInterest_3Month(float d, float r){
    int i3, i6, i9, i12;
    float m;
    i3 = r / 4 / 100 * d; // 3M
    m = d + i3;
    i6 = r / 4 / 100 * m; // 6M
    m += i6;
    i9 = r / 4 / 100 * m; // 9M
    m += i9;
    i12 = r / 4 / 100 * m; // 12M
    // cout << m+i12;
    return (i3 + i6 + i9 + i12);
}
float findCompound_3Month(float d, float i){
    return d+i; // return compound
}
