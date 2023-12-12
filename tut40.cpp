#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_number;

public:
    void set_number(int);
    void get_number(void);
};

void Student ::set_number(int a)
{
    roll_number = a;
}
void Student ::get_number()
{
    cout << "The roll number is " << roll_number << endl;
}

class Exam : public Student
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float, float);
    void get_marks(void);
};
void Exam ::set_marks(float a, float b)
{
    maths = a;
    physics = b;
}
void Exam ::get_marks()
{
    cout << "Your maths marks is " << maths << endl;
    cout << "Your physics marks is " << physics << endl;
}

class result : public Exam
{
    float percentage;

public:
    void display()
    {
        get_number();
        get_marks();
        cout << "Your percentage is " << float((maths + physics) / 2) << endl;
    }
};

int main()
{

    // Student madhu;
    // Exam madhu;
    result madhu;
    madhu.set_number(45);
    // madhu.get_number();
    madhu.set_marks(89, 77);
    // madhu.get_marks();
    madhu.display();

    return 0;
}