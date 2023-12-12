#include<iostream>
#include<fstream>
using namespace std;

int main(){
// connecting out file with hout stream
ofstream hout("sample.txt");

// Creating a name string and filling it with the string  entered by the user
 cout<<"Enter Your name: ";
 string name;
 cin>>name;

 // writing a string to the file 
 hout<<"My name is " + name<<endl;

 hout.close();


 ifstream hin("sample.txt");
 string content;
//  hin>>content;
getline(hin,content);
 cout<<content;
 hin.close();
return 0;
}