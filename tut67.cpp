#include <iostream>
using namespace std;

template <class T1, class T2>
float funcaverage(T1 a, T2 b)
{
    float avg = (a + b) / 2.0;
    return avg;
}

template <class T>
void swapp(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
   
}

int main()
{
    float a;
    a = funcaverage(5, 2.4);
    cout << a<<endl;
    
    int x = 4, y = 6;
    swapp(x, y);
    cout<<x<<endl<<y;
    return 0;
}