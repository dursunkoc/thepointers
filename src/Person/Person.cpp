#include "Person.hpp"
#include <iostream>

Person::Person(){
    this->first = "";
    this->last = "";
    this->age = 0;
}

Person::Person(std::string first, std::string last){
    this->first = first;
    this->last = last;
    this->age = 0;
};

Person::Person(std::string first, std::string last, int age){
    this->first = first;
    this->last = last;
    this->age = age;
};

Person::~Person(){
    std::cout << "Person is destroyed!" << std::endl;
};

void Person::setFirst(std::string first){
    this->first = first;
};

void Person::setLast(std::string last){
    this->last = last;
};

void Person::setAge(int age){
    this->age = age;
};

std::string Person::getFirst(){
    return this->first;
};

std::string Person::getLast(){
    return this->last;
};

int Person::getAge(){
    return this->age;
};

std::string Person::sayHello(){
    return "Hello "+this->first+" "+this->last;
}