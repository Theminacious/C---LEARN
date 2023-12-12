#include <iostream>
#include <cmath>
using namespace std;

// create a function which takes two point objects and computes the distance between those two points
// Hint :make it a friend function

class point
{
    int x, y;
    friend void distance(point o1, point o2);

public:
    point(int a, int b)
    {
        x = a;
        y = b;
    }

    void display()
    {
        cout << "your numbers are " << x <<","<< y << endl;
    }

    
};

    void distance(point o1, point o2)
    {
        cout << sqrt(pow(o2.x - o1.y, 2) + pow(o2.x - o1.y, 2)) << " the distance between points are" << endl;
    };

int main()
{
    point p(1, 1);
    p.display();
    point q(1, 1);
    q.display();
    distance(p, q);

    return 0;
}