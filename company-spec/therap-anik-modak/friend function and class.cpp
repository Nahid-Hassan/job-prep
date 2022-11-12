#include<bits/stdc++.h>
using namespace std;

class A{
    int x;
public:
    friend class B;
    A(){
        x = 50;
    }
    friend void show(A f);
};

class B{
public:
    void fun(A t)
    {
        cout<<t.x<<endl;
    }
};

void show(A f)
{
    cout<<f.x<<endl;
}

int main()
{
    A a;
    B b;
    b.fun(a);
    show(a);
    return 0;
}
