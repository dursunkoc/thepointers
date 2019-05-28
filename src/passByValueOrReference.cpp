#include <iostream>
using namespace std;

void passByValue(int);

void passByReference(int &);

void passThePointer(int *);

int main(){
    int num = 3;
    cout << "Value Passing " << num << endl;
    passByValue(num);
    cout << "Value Passed " << num << endl;
    cout << "*********************************" << endl;
    cout << "Reference Passing " << num << endl;
    passByReference(num);
    cout << "Reference Passed " << num << endl;
    cout << "*********************************" << endl;
    cout << "Pointer Passing " << num << endl;
    passThePointer(&num);
    cout << "Pointer Passed " << num << endl;

}


void passByValue(int value){
    cout << "[passByValue] value:"<<value << endl;
    value = value + 1;
    cout << "[passByValue] value incremented:"<<value << endl;
}

void passByReference(int &value){
    cout << "[passByReference] value:"<<value << endl;
    value = value + 1;
    cout << "[passByReference] value incremented:"<<value << endl;
}

void passThePointer(int *p_value){
    cout << "[passThePointer] value:"<<*p_value << endl;
    *p_value = *p_value + 1;
    cout << "[passThePointer] value incremented:"<<*p_value << endl;

}