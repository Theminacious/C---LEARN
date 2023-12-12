#include <iostream>
using namespace std;

template <class T>
class ankit
{
public:
    T data;
    ankit(T a)
    {
        data = a;
    }
    void display();
};
    template <class T>
    void ankit<T>:: display(){
        cout<<data;
    }
template<class T>
void func(T a){
    cout<<"i am first func() "<<a<<endl;
}


void func(int a){
    cout<<"i am first func() "<<a<<endl;
}

int main()
{
    // ankit<int> h(6);
    // h.display();
    func(4); // exact match takes the highest priority
    return 0;
}