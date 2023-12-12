#include<iostream>
using namespace std;

/*
Syntax for initialization list in constructor:
constructor (argument-list) : initilization-section
{
    assignment + other code;
}

*/
class test{
    int a ;
    int b;
    public:
        // test(int i,int j):a(i),b(j)
        // test(int i,int j):a(i),b(i+j)
        // test(int i,int j):a(i),b(a+j)
        // test(int i,int j):b(j),a(b+j)  Will create a problem because a will initialize first
        
        {
            cout<<"Constructir called : "<<endl;
            cout<<"Value of a is "<<a<<endl;
            cout<<"Value of b is "<<b<<endl;

        }
};

int main(){

    test t(1,2);

return 0;
}