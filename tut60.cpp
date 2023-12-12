#include <iostream>
#include <fstream>

/*
The useful classes for working with files in c++ are:
1. fstreambase
2. ifstream --> derived from fstreambase
3. ofstream --> derived from fstreambase
*/

// In order to work with the files in c++ , you will have to open it.
// primarily there are 2 ways to open a file:
// 1: using the constructor
// 2: using the member functiob open() of the class

using namespace std;

int main()
{
    string s ="ankit bhao";
    string st2;
// opening file using constructor and writing it
ofstream out("samplefile.txt");
out<<s;
 
// opening file using constructor and reading it
ifstream in("sample.txt");
// in>>st2;
getline(in,st2);
cout<<st2;

    return 0;
}