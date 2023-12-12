#include<iostream>
using namespace std;

/* 
Class1:
class B: public A{
    // Order of execution of constructor -> first A() then B()

}

Case-2 :
class A: public B, public C{
    // Order of execution of consturctor -> B() then C() and A()
}

Case 3:
Class A: public B, virtual public C{
// Order of execution of consturctor-> C() then B() then A()
}

*/

class base1{
    int data1;
    public:
        base1(int i){
            data1=i;
            cout<<"Base class1 constructor called"<<endl;
        }

        void printdata1(void){
            cout<<"the value of data is "<<data1<<endl;
        }
};

class base2{
    int data2;
    public:
        base2(int j){
            data2=j;
            cout<<"Base class2 consturctor called"<<endl;
        }

        void printdata2(void){
            cout<<"The value of data is "<<data2<<endl;
        }

};

class derived: public  base1, public base2{
int derived1,derived2;
public:
    derived(int a,int b,int c, int d): base1(a), base2(b){
        derived1=c;
        derived2=d;
        cout<<"Derived class constructor called"<<endl;
    }

     void printdata(void){
            cout<<"the value of derived1 is "<<derived1<<endl;
            cout<<"the value of derived2 is "<<derived2<<endl;
        }
};


int main(){
    
derived zack(1,2,3,4);
zack.printdata2();

return 0;
}