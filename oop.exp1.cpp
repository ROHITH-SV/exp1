#include<iostream>
using namespace std;
class student
{
private:
    int rollno;
    string name;
public:
    student(int r , string n)
    {
        rollno = r;
        name = n;
        cout<<"student object created"<<endl;
    }
    void display()
    {
        cout<<"ROLL NUMBER : "<<rollno<<endl;
        cout<<"NAME : "<<name<<endl;

    }
    ~student()
    {
        cout<<"student object destroyed "<<endl;
    }
};
int main()
{
    student s1(101,"ARUN");
    s1.display();
    return 0;
}