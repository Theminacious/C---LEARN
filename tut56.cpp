#include<iostream>
using namespace std;

//In this code, we have a base class `baseclass` and a derived class `derivedclass` that inherits from the base class.
// We then create objects of both classes and a pointer of the base class type. Finally, we assign the address of the derived class object to the base class pointer

#include<iostream>
using namespace std;

// Base class
class baseclass{
    public:
    int var_base; // Variable of the base class
    virtual void display(){ // Function to display the variable of the base class
        cout<<" 1 DIsplaying Base class variable var_base"<<var_base<<endl;
    }

};

// Derived class
class derivedclass: public baseclass{ // Derived class that inherits from the base class
    public:
 int var_derived; // Variable of the derived class
    void display(){ // Function to display the variables of the base class and the derived class
        cout<<" 2 DIsplaying Base class variable var_base"<<var_base<<endl;
        cout<<" 2 DIsplaying derived class variable var_derived"<<var_derived<<endl;
    }

}; 

int main(){
baseclass *base_class_pointer;
baseclass obj_base;
derivedclass obj_derived;

base_class_pointer = &obj_derived;
base_class_pointer->display();


return 0;
}