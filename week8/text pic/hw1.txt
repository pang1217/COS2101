#include<iostream>

using namespace std;

// struct
struct Set{
    int num;
    Set *link;
};

// function
void Enqueue(Set *&, Set*&);
void Find_Intersec(Set *, Set*);
void Output(Set *);

// main
int main(){
    Set *front_A, *front_B, *rear; // set A, B
    // Set *Ans; // intersec
    front_A = NULL;
    front_B = NULL;
    rear = NULL;
    //Ans = NULL;

    cout << "Set A " << endl;
    Enqueue(front_A, rear);
    rear = NULL;
    cout << "Set B " << endl;
    Enqueue(front_B, rear);

    cout << "Set A = "; Output(front_A);
    cout << "Set B = "; Output(front_B);
    cout << "A intersection B = "; Find_Intersec(front_A, front_B);
    cout << endl;
    //clear
    delete front_A;
    delete front_B;
    delete rear;
    //delete Ans;
}

// Enqueue
void Enqueue(Set* & front, Set* & rear){
    // char key;
    Set *p;
    cout << "Num = ? ";
    do{
        p = new Set;
        cin >> p->num;
        if (p->num == -1){
            break; // stop input
        }
        p->link = NULL;
        if(rear == NULL){
            front = p;
            rear = p;
        } else {
            rear->link = p;
            rear = p;
        }
        //cout << "Run again Y/N ? "; cin >> key;
    } while (p->num != -1);
    delete p;
}

// Find_Intersec
void Find_Intersec(Set *A, Set* B){
    while(B != NULL){
        Set *temp = A;
        while(temp != NULL){
            if (temp->num == B->num){
                cout << B->num << " " ;
            }
            temp = temp->link;
        }
        B = B->link;
    }
}

// Output
void Output(Set* a){
    while(a != NULL){
        cout << a->num << " ";
        a = a->link;
    }
    cout << endl;
}