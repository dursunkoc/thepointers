#include "Person/Person.hpp"
#include <iostream>

void greetPerson(Person &);

int main(){
    Person *p = new Person();
    p->setFirst("Dursun");
    (*p).setFirst("Mustafa");
    std::cout << "Person name:" << p->getFirst()<<", Memory address:"<< &p << " ;; " << p << " ;; " << &(*p) << std::endl;
    greetPerson(*p);
    delete p;
}

void greetPerson(Person &person){
    std::cout << person.sayHello() << std::endl;
}