#include <iostream>
using namespace std;

int main()
{
    //if else program



int age;
cout<<"Enter your age";
cin>>age;

// if (age>18)
// {
//     cout<<"you are  allowed to the party"<<endl;
// }
// else if(age==18){
//     cout<<"OKay we can let you in"<<endl;
// }

// else{
//     cout<<"Call the cops "<<endl;
// }


/// SELECTION CONTROL STATEMENTS---SWITCH CONTROL STATEMENTS
switch (age)
{
case 18:
   cout<<"you are 18";
    break;
case 22:
   cout<<"you are 22";
    break;
    
case 2:
   cout<<"you are 2";
    break;

default:
cout<<"no special case";
    break;
}

    return 0;
}
