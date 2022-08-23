#include<iostream>
#include<string>
#include<math.h>
using namespace std;

// union and difference
void Input(int [], int &);
void Union(const int [], int, const int [], int, int [], int &);
void Difference(const int [], int, const int [], int, int [], int &);
void Output(const int [], int);

// main
int main(){
    // Set A, B
    int A[20], nA; // Set A
    int B[20], nB; // Set B
    nA = nB = 0;
    cout << "Set A = ? "; Input(A, nA);
    cout << "Set B = ? "; Input(B, nB);

    // Union
    int U[40], nU; // Union
    Union(A, nA, B, nB, U, nU);
    cout << "A U B = "; Output(U, nU);

    // Difference
    int D[20], nD; // Difference
    Difference(A, nA, B, nB, D, nD);
    cout << "A - B = "; Output(D, nD);
    return 0;
}

// Input
void Input(int a[], int& n){
    cin >> a[n];
    while(a[n] != -1){
        n++;
        cin >> a[n];
    }
}

// Union
void Union(const int A[], int nA, const int B[], int nB, int U[], int& nU){
    int i, j; // for loop
    for (i=0; i<nA; i++){ // copy
        U[i] = A[i];
    }
    nU = nA; // copy

    bool found;
    for (i=0; i<nB; i++){ // setB
        found = false;
        j = 0;
        while (!found && j < nA){ // setA !found = True
            if (B[i] == A[j]){
                found = true; // then !found = False ; stop while loop
            }else{
                j++; // for setA
            }
        }
        if (found == false){
            U[nU] = B[i];
            nU++;
        }
    }
}

// Difference
void Difference(const int A[], int nA, const int B[], int nB, int D[], int& nD){
    bool found;
    int i, j;
    nD=0;
    for(i=0; i<nA; i++){{
        found = false;
        j=0;
        while(!found && j<nB){ // !found = True
            if(A[i] == B[j]){
                found = true; // then !found = False ; stop while loop
            } else {
                j++;
            }
        }
        if(!found){ // !found = False 
            D[nD] = A[i];
            nD++;
        }
    }
    }
}

// Output
void Output(const int a[], int n){
    for(int i=0; i<n; i++){
        cout << a[i] << " ";
    }
    cout << endl;
}