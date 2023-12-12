#include<iostream>
#include <string>
#include<map>
using namespace std;


// Map is an associative array
int main(){
    map<string,int> marksmap;
    marksmap["Ankit"] = 98;
    marksmap["Rohit"] = 28;
    marksmap["Jack"] = 8;
    marksmap["Mani"] = 48;

    marksmap.insert({{"Kozume",45}, {"Lemda",12}});
    map<string,int>::iterator iter;
    for (iter  = marksmap.begin(); iter!=marksmap.end(); iter++)
    {
        cout<<(*iter).first<<" "<<(*iter).second<<"\n";
    }

    cout<<"The size is :  "<<marksmap.size()<<endl;
    cout<<"The max size is :  "<<marksmap.max_size()<<endl;
    cout<<"The empty's return value is :  "<<marksmap.empty()<<endl;
    
    


return 0;
}