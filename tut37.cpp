#include <iostream>
using namespace std;

// base class
class Employee
{
public:
    int id;
    float salary;
    Employee(int inpId)
    {
        id = inpId;
        salary = 34.0;
    }

    Employee(){}
};

//  // Derived Class syntax
// class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
// {
//     class members/methods/etc...
// }

class User : Employee
{
public:
    User(int inpId)
    {
        id = inpId;
    }
    int languageCode = 9;
    void getdata(){
        cout<<id;
    }
};

int main()
{
    Employee Ankit(1);
    cout << Ankit.salary << endl;

    User JAI(10);
    cout<<JAI.languageCode<<endl;
    JAI.getdata();

    return 0;
}

