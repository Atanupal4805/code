#include <iostream>
using namespace std;

class Person {
private:
    string name;
    int age;
    
public:
    Person(string n, int a) {
        name = n;
        age = a;
    }
    
    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    Person person1("John", 30);
    
    person1.displayInfo();
    
    return 0;
}
