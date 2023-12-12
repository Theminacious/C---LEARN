#include <iostream>
using namespace std;

class student
{
protected:
    int roll_no;

public:
    void set_number(int a)
    {
        roll_no = a;
    }

    void print_number(void)
    {
        cout << "Your Roll Number is " << roll_no << endl;
    }
};

class test : virtual public student
{
protected:
    float maths, physics;

public:
    void set_marks(float a, float b)
    {
        maths = a;
        physics = b;
    }
    void print_marks(void)
    {
        cout << "Your Maths marks are " << maths << endl;
        cout << "Your Physics marks are " << physics << endl;
    }
};

class sports : virtual public student
{
protected:
    float score;

public:
    void set_score(float sc)
    {
        score = sc;
    }

    void print_score(void)
    {
        cout << "Your PT score is " << score << endl;
    }
};

class result : public test, public sports
{
    private:
    float total;
    public:
    void display(){
        total = maths + physics + score;
        print_number();
        print_marks();
        print_score();
        cout<<"your Total score is "<<total<<endl;

    }
};
int main()
{
    result ankit;
    ankit.set_marks(78,99);
    ankit.set_number(99);
    ankit.set_score(9);

    ankit.display();

    return 0;
}