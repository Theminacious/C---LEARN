#include<iostream>
using namespace std;
// Destructor never takes an argument nor does it return any value 
int count=0;

class num{
    public:
        num(){
            count++;
            cout<<"This is the time when constructor is called for object number . "<<count<<endl;
        }

        ~num(){
             cout<<"This is the time when destructor is called for object number . "<<count<<endl;
            count--;
        }
        };


int main(){
    cout<<"we are inside a main function"<<endl;
    cout<<"creating first object n1"<<endl;
    num n1;
    {
        cout<<"Entering this block"<<endl;
        cout<<"creating two more object"<<endl;
        num n2,n3;
        cout<<"Exiting this block"<<endl;

    }

cout<<"back to main"<<endl;

return 0;
}