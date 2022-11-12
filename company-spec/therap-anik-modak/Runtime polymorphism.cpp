#include<bits/stdc++.h>
using namespace std;

class base{
public:
    void virtual print()
    {
        cout<<"Base class\n";
    }
};

class derived : public base
{
public:
    void print()
    {
        cout<<"Derived class\n";
    }
};

int main()
{
    base *bptr;
    derived d;
    bptr = &d;
    bptr->print();
    return 0;
}
