#include<iostream>
#include<iomanip>
using namespace std;

// struct
struct Student{
    string ID;
    string Name;
    int Credit;
    float average;
    Student *link;
};

// function
void Input(Student *&);
void FindNum(Student *);
void FindStudent(Student *);

// main
int main(){
    // int CountTotal;
    Student *first;
    first = NULL;
    
    Input(first);
    cout << endl;
    FindNum(first);
    FindStudent(first);

    return 0;
}

// Input()
void Input(Student *& first){
    Student *p;
    string id;
    Student *temp = first;
    
    cout << "id=? "; cin >> id;
    while(id != "000"){

        p = new Student;
        p->ID = id;
        cout << "name=? "; cin >> p->Name;
        cout << "credit=? "; cin >> p->Credit;
        cout << "average=? "; cin >> p->average;
        p->link = NULL;

        if (first == NULL){
            first = p;
        } else {
            Student* temp = first;
            while(temp->link != NULL){
                temp = temp->link;
            }
            temp->link = p;
        }
        cout << "id=? "; cin >> id;
    }

}


// FindNum
void FindNum(Student *first){
    int count = 0;
    while(first != NULL){
        count++;
        first = first->link;
    }
    cout << "Total students = " << count << endl;
}

// FindStudent
void FindStudent(Student *first){
    int count=0;
    cout << "Not considered :" << endl;
    while(first != NULL){
        if (first->average < 2.00){
            cout  << setw(5) << first->ID << setw(5) << first->Name << setw(5) << first->average << endl;
            count++;
        }

        first = first->link;
    }
    cout << "Total not considered = " << count << endl;
}