#include <string>

class Person{
    private:
    std::string first;
    std::string last;
    int age;

    public:
    Person();
    Person(std::string first, std::string last);
    Person(std::string first, std::string last, int age);
    ~Person();
    void setFirst(std::string first);
    void setLast(std::string last);
    void setAge(int age);
    std::string getFirst();
    std::string getLast();
    int getAge();
    std::string sayHello();
};