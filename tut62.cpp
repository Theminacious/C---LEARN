#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
ofstream out;
out.open("sample.txt");
out<<"this is me"<<endl;
out<<"lola";
out.close();



ifstream in;
string st;
in.open("sample.txt");
// in>>st; //Return only one word
// getline(in,st);
// cout<<st;
while(in.eof()==0){
    getline(in,st);
    cout<<st<<endl;
}
in.close();
r eturn 0;
}