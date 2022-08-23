//4.จงเขียนโปรแกรมคูณเมตริกซ์ กำหนดให้เมตริกซ์ A และเมตริกซ์ B มีขนาด  nxn
#include<iostream>
#include<iomanip>
using namespace std;

// Function
void Input(int a[][20], const int);
void Find(const int a[][20], const int b[][20], int ans[][20], const int n);
void Show(int a[][20], const int); // check

int main(){
    // variable
    int n;
    int A[20][20], B[20][20];
    int ans[20][20];

    // A
    cout << "Matrix A & B = n x n ; n = ? "; cin >> n;
    cout << "Matrix A "; Input(A, n);

    // B
    cout << "Matrix B "; Input(B, n);

    // show matrix A, B
    cout << "Matrix A : " << endl;
    Show(A, n);
    cout << "Matrix B : " << endl;
    Show(B, n);

    //ans
    Find(A, B, ans, n);
    cout << "A x B : " << endl;
    Show(ans, n);
}

void Input(int a[][20], const int n){
    int num;
    cout << "Put " << n*n << " Integer : ";
    for (int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> num;
            a[i][j] = num;
        }
    }
}

void Find(const int a[][20], const int b[][20], int ans[][20], const int n){
    int row, col, index;
    for(row=0; row<n; row++){
        for(col=0; col<n; col++){
            ans[row][col] = 0;
            for(index=0; index<n; index++){
                ans[row][col] += a[row][index] * b[index][col];
            }
        }
    }
}

void Show(int a[][20], const int n){
    for (int row=0; row<n; row++){
        for(int col=0; col<n; col++){
            cout << setw(5) << a[row][col] ;
        }
        cout << endl;
    }
}