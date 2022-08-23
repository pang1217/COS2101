#include<iostream>
using namespace std;

// struct
struct Student{
    string ID;
    string Name;
    char Sex;
    int age;
    Student *next;
};
// function
void Push(Student *&);
void Pop(Student *);
void Find(Student *);
// main
int main(){
    Student *top;
    top = NULL;
    char ch;
    do{
        Push(top);
        cout << "run again Y/N? "; cin >> ch;
    }while(ch == 'y' || ch == 'Y');
    // Pop(top);

    // Find;
    Find(top);
}

// push
void Push(Student *& top){
    Student *p;
    p = new Student;
    cout << "id=? "; cin >> p->ID;
    cout << "name=? "; cin >> p->Name;
    cout << "sex M/F? "; cin >> p->Sex;
    cout << "age=? "; cin >> p->age;
    p->next = NULL;

    if(top == NULL){
        top = p;
    } else {
        p->next = top;
        top = p;
    }
}

// pop
void Pop(Student * top){
    while(top != NULL){
        cout << "id: " << top->ID << " name: " << top->Name << " sex: " << top->Sex << " age: " << top->age << endl;
        top = top->next;
    }
}

//Find
void Find(Student *top){
    int M, F; // count sex
    int c, t, m; // count age
    M = F = c = t = m = 0;
    while(top != NULL){
        // cout sex
        if(top->Sex == 'F' || top->Sex == 'f'){
            F++;
        } else if(top->Sex == 'M' || top->Sex == 'm'){
            M++;
        }

        //count age;
        if(1 <= top->age && top->age <= 17){
            c++;
        } else if (18 <= top->age && top->age <= 22){
            t++;
        } else {
            m++;
        }

        top = top->next;
    }

    cout << endl;
    cout << "Female = " << F << endl;
    cout << "Male = " << M << endl;
    cout << "age 1-17 = " << c << endl;
    cout << "age 18 - 22 = " << t << endl;
    cout << "age > 22 = " << m << endl;
}

