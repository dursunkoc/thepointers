#include <iostream>
#include "Human/Human.hpp"

void passByValue(int value);
void passByReference(int &value);
void modifyHuman(Human &human);

int main(){
    int num1;
    int *pNum;

    num1 = 3;
    int *pNum1 = &num1;
    *pNum = 5;


    std::cout << "num1: "<< num1<<", *pNum: "<< *pNum << std::endl;
    passByValue(num1);
    passByValue(*pNum);
    std::cout << "PassByValue: num1: "<< num1<<", *pNum: "<< *pNum << std::endl;
    passByReference(*pNum1);
    passByReference(*pNum);
    std::cout << "PassByReference: num1: "<< num1<<", *pNum: "<< *pNum << std::endl;
    double *pDouble = new double;
    *pDouble = 10.1;
    std::cout << "*pDouble :" << *pDouble << " is at "<< pDouble << std::endl;
    delete pDouble;
    std::cout << "*pDouble :" << *pDouble << " is at "<< pDouble << std::endl;
    Human *h = new Human;
    h->age = 30;
    h->height=180;
    h->weight=106;
    h->name = "Dursun";
    Human human = *h;
    std::cout << "Human: age:"<<h->age<<", name:"<<h->name<<", weight:"<<h->weight<<", height:"<<h->height<<std::endl;
    modifyHuman(*h);
    std::cout << "Modififaction" << std::endl;
    std::cout << "Human: age:"<<h->age<<", name:"<<h->name<<", weight:"<<h->weight<<", height:"<<h->height<<std::endl;
    std::cout << "human at: "<< &human << ", h:" << h<< std::endl;
}

void passByValue(int value) {
    std::cout << "[PassByValue]-in :"<< value << std::endl;
    value = value + 1;
    std::cout << "[PassByValue]-out :"<< value << std::endl;
}

void passByReference(int &value) {
    std::cout << "[PassByRefence]-in :"<< value << std::endl;
    value = value + 1;
    std::cout << "[PassByRefence]-out :"<< value << std::endl;
}

void modifyHuman(Human &human){
    human.age = human.age + 1;
    human.height = human.height + 10;
    human.weight = human.weight +5;
}