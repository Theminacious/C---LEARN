#include <iostream>
using namespace std;

class base1
{
protected:
    int baseint;

public:
    void get_base(int a)
    {
        baseint = a;
    }
};

class base2 
{
protected:
    int base2int;

public:
    void get_base2(int a)
    {
        base2int = a;
    }
};

class derived : public base1, public base2{
    public:
    void show(void){
        cout<<"the value of base 1 is "<<baseint<<endl;
        cout<<"the value of base 2 is " <<base2int<<endl;
        cout<<"the value of base 3 is " <<base2int + baseint<<endl;
    }

};

int main()
{
    derived cuba;
    cuba.get_base2(18);
    cuba.get_base(26);
    cuba.show();
    return 0;
}