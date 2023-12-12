#include<iostream>
using namespace std;

class complex{
    int real, imaginary;
    public:
    void getdata(){
        cout<<"The real part is " <<real<<endl;
        cout<<"The imaginary part is " <<imaginary<<endl;
    }
void setdata(int a , int b){
    real = a;
    imaginary = b;
}
};

int main(){
// complex c; 
// complex *ptr = &c;
complex *ptr = new complex;
// (*ptr).setdata(1,2); is same as
ptr->setdata(1,2);
(*ptr).getdata();


// Array of objects
complex *ptr1 = new complex[4];
ptr->setdata(1,4);
ptr->getdata();
return 0;
}