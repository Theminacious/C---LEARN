#include <iostream>
using namespace std;

int c=95;

int main()
{

 /*******************BUILD IN VARIABLES*********************************/   
//  int a,b,c;

// cout<<"enter value of a";
// cin>>a;
// cout<<"enter value of b" ;
// cin>>b;

// c = a+b;

// cout<<"sum of a+b is "<<c;
// cout <<"the Global c is"<<::c;

 /*******************FLOAT , DOUBLE ,LONG DOUBLE LITERALS*********************************/


// float d=34.4;
// long double e=34.4;

// cout<<"the value of d is "<<d<<endl<<"the value of e is "<<e<<endl;

// cout<<"Size opf 34.4 is "<<sizeof(34.4)<<endl;
// cout<<"Size opf 34.4f is "<<sizeof(34.4f)<<endl;
// cout<<"Size opf 34.4F is "<<sizeof(34.4F)<<endl;
// cout<<"Size opf 34.4l is "<<sizeof(34.4l)<<endl;
// cout<<"Size opf 34.4L is "<<sizeof(34.4L)<<endl;
    




 /*******************REFERENCE VARIABLES VARIABLES*********************************/
// rohan das----------> chuyiya-------->lund---------------->coder
// float j=233;
// float & ank=j;  yaha pr ank ko ek reference variable banaya ja rha h jo j ko point kr rha hai
// cout<<j<<endl;
// cout<<ank<<endl;


/********************TYPECASTING************************/

int a =45;
float b =45.46;

cout<<"the valoue of a is " <<float(a)<<endl;
cout<<"the valoue of b is " <<int(b)<<endl;

int c=int(b);

cout<<"the expression  is " <<a+b<<endl;
cout<<"the expression is " <<int(b)+a<<endl;
cout<<"the expression is " <<(int)b +a<<endl;






    return 0;
}
