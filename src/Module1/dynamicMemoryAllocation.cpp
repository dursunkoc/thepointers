# include <iostream>

int main(){
    int *pInt = new int;
    *pInt = 5;
    double *pDouble = new double;
    *pDouble = 10.0;
    std::cout << "Size of *int: "<< sizeof(pInt) << ", value:" << pInt<<std::endl;
    std::cout << "Size of int: "<< sizeof(*pInt) << ", value:" << *pInt<<std::endl;

    std::cout << "Size of *double: "<< sizeof(pDouble) << ", value:" << pDouble<<std::endl;
    std::cout << "Size of double: "<< sizeof(*pDouble) << ", value:" << *pDouble<<std::endl;

    delete pInt;
    delete pDouble;
}