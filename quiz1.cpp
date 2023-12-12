#include <iostream>
#include <cmath>
using namespace std;

//create a function which takes two point objects and computes the distance between those two points
//Hint :make it a friend function


class point
{
    int x, y;

public:
    point(int a, int b)
    {
        x = a;
        y = b;
    }

    int distancepoint(int a1,int b1){
        cout<<sqrt((x -a1)*(x -a1) + (y -b1)*(y -b1))<<" this is your result of distance between 1,1 and 1,1"<<endl;

    }

};

int main()
{
    point p(1,1);
    p.distancepoint(1,1);


    return 0;
}