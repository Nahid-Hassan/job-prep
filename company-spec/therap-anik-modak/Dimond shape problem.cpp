#include<bits/stdc++.h>
using namespace std;

class A{
public:
    void fun(){
        cout<<"Class A\n";
    }
};

class B: virtual public A{

};

class C: virtual public A{

};

class D: public B, public C{

};

int main()
{
    D obj;
    obj.fun();
}
