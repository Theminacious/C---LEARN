#include <iostream>
#include <list>
using namespace std;

// Function to display the elements of a list
void display(list<int> &l){
    list<int>::iterator it;

    for (it = l.begin(); it!=l.end(); it++){

        cout<<*it<<" "; // Print the current element
    }
    cout<<endl;     
}

int main()
{
    list<int> list1; // Create an empty list of integers

    // Add elements to the first list
    list1.push_back(5);   // Add 5 to the list
    list1.push_back(79); // Add 79 to the list
    list1.push_back(56); // Add 56 to the list
    list1.push_back(3);   // Add 3 to the list
    list1.push_back(4);   // Add 4 to the list
    // Call the display function to print the elements of the first list
    display(list1);


    // Removing element from the list

    // list1.pop_back();
    // list1.pop_front();
    // list1.remove(4);

    // Sorting the list
    // list1.sort();
    // display(list1);

    // Reversing the List
    list1.reverse();
    cout<<"reversing the list"<<endl;
    display(list1);

    /*-----------------------------*/    
    list<int> list2(3); // Create an empty list of integers
    list<int>::iterator iter=list2.begin();
    *iter=95;
    iter++;
    *iter=65;
    iter++;
    *iter=35;
    display(list2);

    
    // Merging the list
    list1.merge(list2);
    cout<<"List 1 after merging"<<endl;
    display(list1);




    return 0;
}