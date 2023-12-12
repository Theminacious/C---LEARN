#include <iostream>
using namespace std;

class base1
{
public:
    void greet()
    {
        cout << "how are you?";
    }
};

class base2
{
public:
    void greet()
    {
        cout << "Kaise ho?";
    }
};

class derived : public base1, public base2
{
    int a;

public:
    void greet()
    {
        base1::greet();
    }
};

class B
{
public:
    void say()
    {
        cout << "Hello world;";
    }
};

class D : public B
{
public:
    void say()
    {
        cout << "Hello world chuchue";
    }
};

int main()
{

    // Ambiguity 1

    // derived d;
    // d.greet();
    D d;
    d.say();
    

    return 0;
}