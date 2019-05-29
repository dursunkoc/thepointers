#include <iostream>

int main(){
    int num = 3;
    int *pNum = &num;
    std::cout << "Adress: "<< pNum << ", has the value of: "<< *pNum << std::endl;
    std::cout << "Change" << std::endl;
    *pNum = 45;
    std::cout << "Adress: "<< pNum << ", has the value of: "<< *pNum << ", and variable:" << num <<std::endl;

}