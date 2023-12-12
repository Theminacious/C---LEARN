#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;



/*
Create 2 classes:
    1. SimpleCalculator - Takes input of 2 numbers using a utility function and performs +, -, *, / and displays the results using another function.
    2. ScientificCalculator - Takes input of 2 numbers using a utility function and performs any four scientific operations of your choice and displays the results using another function.

    Create another class HybridCalculator and inherit it using these 2 classes:
    Q1. What type of Inheritance are you using?
    Q2. Which mode of Inheritance are you using?
    Q3. Create an object of HybridCalculator and display results of the simple and scientific calculator.
    Q4. How is code reusability implemented?
*/

class SimpleCalculater
{
protected:
    int a;
    int b;
    char op;

public:
    SimpleCalculater() {}
    SimpleCalculater(int x)
    {
        cout << "Enter two numbers: ";
        cin >> a >> b;
        cout << "Enter an operator (+, -, *, /): ";
        cin >> op;
    }

    int calcu()
    {
        if (op == '+')
        {
            return a + b;
        }
        else if (op == '-')
        {
            return a - b;
        }
        else if (op == '*')
        {
            return a * b;
        }
        else if (op == '/')
        {
            return a / b;
        }
    }
};

class ScifiCalculater
{
protected:
    int x;
    int y;
    char op;
    int c = 1;

public:
    ScifiCalculater() {}
    ScifiCalculater(int x)
    {
        cout << "Enter two numbers: ";
        cin >> x >> y;
        cout << "Enter an operator (+, -, *, /, ^, !, r): ";
        cin >> op;
    }

    int calc()
    {
        if (op == '^')
        {
            return pow(x, y);
        }
        else if (op == 'r')
        {
            cout << sqrt(x) << endl
                 << sqrt(y);
            return 0;
        }
        else if (op == '!')
        {
            for (int i = 1; i <= x; i++)
            {   if(x==0 || x==1){
                return 1;
            }else{
                c *= i;
                
            }
            cout << "yeh mera x hai " << c << endl;
            
        }
    }
};

class Hybrid : public SimpleCalculater, public ScifiCalculater
{
public:
    void display()
    {
        SimpleCalculater s(1);
        cout << "Simple Calculation: " << s.calcu() << endl;

        ScifiCalculater sc(1);
        cout << "Sci-Fi Calculation: ";
        sc.calc();
    }
};

int main()
{
    Hybrid h;
    h.display();

    return 0;
}