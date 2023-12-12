#include<iostream>
using namespace std;

class A{
    int a;
    public:
    void setdata(int a){
       this->a=a ;
    }

    void getdata(){
        cout<<"The value of a is "<<a<<endl;
    }
};
int main(){
    // this is a keyword which is a pointer which points to the object which invokes the member fucntion
    A a;
    a.setdata(23);
    a.getdata();

return 0;
}