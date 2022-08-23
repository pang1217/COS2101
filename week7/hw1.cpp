#include<iostream>
#include<string>
#include<iomanip>
#include<stdlib.h>
using namespace std;

// struct
// product
struct product{
    string id;
    string name;
    float cost;
    int instock;
};
// sell
struct sell{
    string id;
    string name;
    float cost;
    int piece;
    float amount;
};

// function
void Menu(char&);
int Search(const product [], int, int);
void Input(product [], int&);
void SellItem(product [], int);
void Output(const sell[], int);
void CheckStock(product [], int);
void Reorder(const product [], int); // hw : add reorder

// main
int main(){
    product item[100];
    int n=0;
    char select;
    cout << fixed << setprecision(2);
    do{
        // system("cls"); // Windows
        // system("clear"); // Macos
        Menu(select);
        switch(select){
            case '1' : Input(item, n); break;
            case '2' : SellItem(item, n); break;
            case '3' : CheckStock(item, n); break;
            case '4' : Reorder(item, n); break;
        }
    } while(select != '5');
    return 0;
}

// Menu
void Menu(char& select){
    cout << " Menu" << endl;
    cout << "1. Add item to Cart" << endl;
    cout << "2. Sell product" << endl;
    cout << "3. Check stock" << endl;
    cout << "4. Reorder" << endl;
    cout << "5. End program" << endl;
    cout << "Please select 1/ 2/ 3/ 4/ 5 =? ";
    cin >> select;
}

// Search
int Search(const product item[], int n, string key){
    for(int i=0; i<n; i++){
        if (key == item[i].id){
            return i; // found
        }
    }
    return -1; // not found
}

//Input
void Input(product item[], int& n){
    string key;
    char repeat;
    int num;
    //check
    do{
        cout << "id=? "; cin >> key;
        int index = Search(item, n, key);

        if (index == -1){ // new product
            cout << "New product : " << endl;
            item[n].id = key;
            cout << "Name=? "; cin >> item[n].name;
            cout << "cost=? "; cin >> item[n].cost;
            cout << "instock=? "; cin >> item[n].instock;
            n++;
        } else { // Add stock
            cout << item[index].id << " instock = " << item[index].instock << endl;
            cout << "peice=? "; cin >> num;
            item[index].instock += num;
            cout << item[index].id << " instock = " << item[index].instock << endl;
        }
        cout << "Repeat Y/N ? "; cin >> repeat;
    }while(repeat == 'Y' || repeat == 'y');
}

// SellItem
void SellItem(product item[], int n){
    string key;
    char repeat;
    sell order[10];
    int p=0;
    float total = 0;
    do {
        cout << "id=? "; cin >> key;
        int index = Search(item, n, key);
        if (index == -1){
            cout << "Invalid id : " << endl;
        } else{
            int num=0;
            cout << item[index].id << " instock = " << item[index].instock << endl;
            do {
                cout << "peice=? "; cin >> num;
            } while (num>item[index].instock);
            item[index].instock -= num;
            cout << item[index].id << " instock = " << item[index].instock << endl;

            order[p].id = item[index].id;
            order[p].name = item[index].name;
            order[p].cost = item[index].cost;
            order[p].piece = num;
            order[p].amount = num * item[index].cost;
            total += order[p].amount;
            p++;
        }
        cout << "Repeat Y/N? "; cin >> repeat;
    } while (repeat =='Y' || repeat =='y');
    
    Output(order, p);
    cout << "Total = " << total << " baths" << endl << endl;
    // system("pause");
}

// Output
void Output(const sell order[], int p){
    int totalpeice = 0;
    cout << endl;
    cout << "   RAM HUAMARK" << endl;
    cout << " RECEIPT INVOICE" << endl;
    cout << endl;
    for (int i=0; i<p; i++){
        cout << setw(5) << order[i].piece << " P";
        cout << setw(5) << order[i].name;
        cout << setw(8) << order[i].amount<< endl;
        totalpeice += order[i].piece;
    }
    cout << endl << "Pieces = " << totalpeice << " P" << endl;
}

// CheckStock
void CheckStock(product item [], int n){
    product temp;
    int row, col;
    for (row=0; row<n-1; row++){
        for(col=row+1; col<n; col++){
            if(item[row].instock > item[col].instock){
                temp = item[row];
                item[row] = item[col];
                item[col] = temp;
            }
        }
    }
    cout << "instock    id      name" << endl;
    cout << "-----------------------" << endl;
    for(int i=0; i<n; i++){
        cout << setw(4) << item[i].instock << setw(10) << item[i].id << setw(10) << item[i].name << endl;
    }
    // system("pause");
}

// HW add Reorder
// Reorder
void Reorder(const product item[], int n){
    cout << "\n\t Reorder." << endl;
    cout << "instock    id      name" << endl;
    cout << "-----------------------" << endl;
    for (int i=0; i<n; i++){
        if (item[i].instock < 50){
            cout << setw(4) << item[i].instock << setw(10) << item[i].id << setw(10) << item[i].name << endl;
        }
    }
}