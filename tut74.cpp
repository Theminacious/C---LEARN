#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;

int main(){
// Function objects (Functor) : Function wrapped in a class so that it is available like an object
int arr[]={1,20,56,78,12,66};
// sort(arr,arr+6);
sort(arr,arr+6,greater<int>());
for (int i = 0; i < 6; i++)
{
    cout<<arr[i]<<" ";
}

return 0;
}