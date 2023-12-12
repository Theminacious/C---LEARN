
//In this code, we have a base class `baseclass` and a derived class `derivedclass` that inherits from the base class.
// We then create objects of both classes and a pointer of the base class type. Finally, we assign the address of the derived class object to the base class pointer

#include<iostream>
using namespace std;

// Base class
class baseclass{
    public:
    int var_base; // Variable of the base class
    void display(){ // Function to display the variable of the base class
        cout<<"DIsplaying Base class variable var_base"<<var_base<<endl;
    }

};

// Derived class
class derivedclass: public baseclass{ // Derived class that inherits from the base class
    public:
 int var_derived; // Variable of the derived class
    void display(){ // Function to display the variables of the base class and the derived class
        cout<<"DIsplaying Base class variable var_base"<<var_base<<endl;
        cout<<"DIsplaying derived class variable var_derived"<<var_derived<<endl;
    }

}; 

int main(){
    // Create a pointer of base class type
    baseclass *base_class_pointer;

    // Create objects of base class and derived class
    baseclass obj_base;
    derivedclass obj_derived;
  
    // Assign the address of derived class object to the base class pointer
    base_class_pointer = &obj_derived;

     base_class_pointer->var_base=34;

    // Call the display function using the base class pointer
    base_class_pointer->display();

    
    // base_class_pointer->var_derived; // will through an error
   
    
    return 0;
}
//
//In this code, we have a base class `baseclass` and a derived class `derivedclass` that inherits from the base class. We then create objects of both classes and a pointer of the base class type. Finally, we assign the address of the derived class object to the base class pointer.
//
//The `display` function in the base class only displays the variable of the base class. However, the `display` function in the derived class also displays the variable of the derived class.
//
//When we call the `display` function using the base class pointer, it calls the `display` function of the derived class, which is known as dynamic binding. This is because the actual object that the base class pointer is pointing to is an object of the derived class. Therefore, the `display` function of the derived class is called, allowing us to display the variable of the derived class as well..</s>