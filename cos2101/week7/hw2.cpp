#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

const int MAX = 20;
// struct
struct Customer{
    string ID;
    string Name;
    string Address;
    float Deposit;
};

// function
void Menu(char &);
int Find(const Customer [], int, string);
void NewBankAccount(Customer [], int &);
void Deposit(Customer [], int);
void WithDraw(Customer [], int);
void Compound_Interest(Customer [], int);

// main
int main(){
    Customer Ram[MAX];
    int n=0; //count member
    char select;

    cout << fixed << setprecision(2);

    do{
        Menu(select);
        switch(select){
            case '1' :
                cout << "\nNew Bank Account" << endl;
                NewBankAccount(Ram, n);
                break; 
            case '2' :
                cout << "\nDeposit" << endl;
                Deposit(Ram, n);
                break;
            case '3' :
                cout << "\nWithdraw" << endl;
                WithDraw(Ram, n);
                break;
            case '4' :
                cout << "\nCompound Interest" << endl;
                Compound_Interest(Ram, n);
                break;
        }
    }while(select != '5');
}

// Menu
void Menu(char & select){
    cout << "\n===========MENU==========" << endl;
    cout << "(1) Open New Bank Account" << endl;
    cout << "(2) Deposit" << endl;
    cout << "(3) Withdraw" << endl;
    cout << "(4) Compound Interest" << endl;
    cout << "(5) Quit" << endl;
    cout << "Please select 1/ 2/ 3/ 4/ 5 = ?  "; cin >> select;
}

// Find
int Find(const Customer Ram[], int n, string target){
    int i;
    for (i=0; i<n; i++){
        if (Ram[i].ID == target){
            return i;
        }
    }
    return -1;
}

// New Bank Account
void NewBankAccount(Customer Ram[], int & n){
    string key = "y";
    do{
    cout << "ID : "; cin >> key;
    int check = Find(Ram, n, key);
    if (check == -1){
        Ram[n].ID = key;
        cout << "Name : "; cin >> Ram[n].Name;
        cout << "Address : "; cin >> Ram[n].Address;
        cout << "Deposit : "; cin >> Ram[n].Deposit;
        cout << "Create bank account done." << endl;
        n++;
        key = "n"; // stop loop
    } else {
        cout << "This ID already has." << endl;
        cout << "Try again Y/N ? "; cin >> key;
    }

    } while(key == "Y" || key == "y");
}

// Deposit
void Deposit (Customer Ram[], int n){
    string target;
    int money;
    cout << "Enter Your ID : "; cin >> target;
    int position = Find(Ram, n, target);
    if (position != -1){
        cout << "ID : " << Ram[position].ID << " balance : " << Ram[position].Deposit << endl;
        cout << "The amount you want to deposit? "; cin >> money;
        Ram[position].Deposit += money;
        cout << "ID : " << Ram[position].ID << " balance : " << Ram[position].Deposit << endl;
    } else {
        cout << "Account not found." << endl;
    }
    //system("pause");
}

// withdraw
void WithDraw(Customer Ram[], int n){
    string target;
    int money;
    cout << "Enter your ID : "; cin >> target;
    int position = Find(Ram, n, target);

    if (position != -1 && Ram[position].Deposit >= 100){
        cout << "ID : " << Ram[position].ID << " balance : " << Ram[position].Deposit << endl;
        cout << "The amount you want to withdraw? "; cin >> money;
        Ram[position].Deposit -= money;
        cout << "ID : " << Ram[position].ID << " balance : " << Ram[position].Deposit << endl;
    } else if(Ram[position].Deposit < 100){
        cout << "ID : " << Ram[position].ID << " balance : " << Ram[position].Deposit << endl;
        cout << "This account doesn't have enough money." << endl;
    } else {
        cout << "Account not found." << endl;
    }
   // system("pause");
}

// compound interest
void Compound_Interest(Customer Ram[], int n){
    float rate;
    float day_interest=1;
    cout << "Rate : "; cin >> rate; // rate year tranfer to 1 day
    cout << "Old balance    Interest    New balance" << endl;
    for (int i=0; i<n; i++){
        day_interest = (rate / 365.0/ 100) * Ram[i].Deposit;
        cout << Ram[i].Deposit << setw(15) << day_interest ;
        Ram[i].Deposit += day_interest;
        cout << setw(15) << Ram[i].Deposit << endl;
    }
    //system("pause");
}