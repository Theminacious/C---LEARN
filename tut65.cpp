#include<iostream>
using namespace std;

/*
template<class T1, class T2>
class nameOfClass{
    //body
}
*/

template <class T1,class T2>

class myclass{
    public:
    T1 data1;
    T2 data2;
    myclass(){
        data1=2;
        data2=7.9;
    }
    void display(){
        cout<<this->data1<<" "<<this->data2;
    }
};

int main(){
myclass<int , float> obj;
obj.display();
return 0;
}