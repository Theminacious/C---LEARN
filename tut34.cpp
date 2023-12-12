#include <iostream>
using namespace std;

class number
{
    int a;

public:
    number() { a = 0; }
    number(int num)
    {
        a = num;
    }

    // "When there is no consturctor is found, compiler supplies its own copy constructor"
    number(number &obj)
    {
        cout << "Called COPY consturctor" << endl;
        a = obj.a;
    }

    void display()
    {
        cout << "the number for this obkect is " << a << endl;
    }
};

int main()
{
    number x, y, z(45), z2;
    x.display();
    y.display();
    z.display();

    number z1(z); // copy constructor invoked
    z1.display();

    z2 = z; // copy constructor not called
    z2.display();

    number z3 = z;
    z3.display();

    return 0;
}