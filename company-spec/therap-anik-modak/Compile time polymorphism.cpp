#include<bits/stdc++.h>
using namespace std;

class Overloading{
public:
    int add(int a, int b)
    {
        return a+b;
    }
    double add(double a, double b)
    {
        return a+b;
    }
};

int main()
{
    Overloading obj;
    int sum1 = obj.add(5, 3);
    double sum2 = obj.add(5.5, 4.5);
    cout<<sum1<<" "<<sum2<<endl;
    return 0;
}
