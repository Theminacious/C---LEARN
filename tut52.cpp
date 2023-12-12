#include<iostream>
using namespace std;

class shop{
    int id;
    float price;
    public:
    void setdata(int a , float b){
        id = a;
        price = b;

    }
    void getdata(){
        cout<<"Code of my item is "<<id<<endl;
        cout<<"price of my item is "<<price<<endl;


    }
};
int main(){
    int size = 3;
    shop *ptr = new shop[size];
    shop *ptrTemp = ptr;
    ptr->setdata(23,45.0);
    ptr->getdata();

    int p,q;
    for(int i=0; i<size;i++){
        cout<<"Enter id and price  of the shop "<<i+1;
        cin>>p>>q;

        ptr->setdata(p,q);
        ptr++;
    }

    for ( int i = 0; i < size; i++)
    {   cout<<"Item number "<< i+1;
    ptrTemp->getdata();
    ptrTemp++;
        
    }
    


    

return 0;
}