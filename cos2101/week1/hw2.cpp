// convert coins to cash.
#include<iostream> 
using namespace std;
int main() {
    int coin;
    int B1000, B500, B100, B50, B20, coinsLeft; // B = Bank
    
    cout << "Convert coins to cash." << endl;
    cout << "Enter your coin : "; cin >> coin;

    B1000 = coin / 1000;
    B500 = (coin % 1000) / 500;
    B100 = (coin - ((B1000 *1000) + (B500 * 500))) / 100;
    B50 = (coin - ((B1000 *1000) + (B500 * 500) + (B100 * 100))) / 50;
    B20 = (coin - ((B1000 *1000) + (B500 * 500) + (B100 * 100) + (B50 * 50))) / 20;
    coinsLeft = (coin - ((B1000 *1000) + (B500 * 500) + (B100 * 100) + (B50 * 50) + (B20 * 20)));

    cout << "Bank 1000 : " << B1000 << endl;
    cout << "Bank 500 : " << B500 << endl;
    cout << "Bank 100 : " << B100 << endl;
    cout << "Bank 50 : " << B50 << endl;
    cout << "Bank 20 : " << B20 << endl;
    cout << "Coins left : " << coinsLeft << endl; 
    
    return 0;
}