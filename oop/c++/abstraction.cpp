#include <bits/stdc++.h>
using namespace std;

/**
 * @brief Abstraction: Hide complex systems from end user.
 * 
 * The inner implementation of a system can be changed, but the final output of the
 * system may(rarely) or may not changed.
 * 
 */


/**
 * @brief Abstract class: Abstract class in C++, that has at least one pure virtual function.
 * 
 * We cannot create an instances of abstract class, but we can create pointers of abstract classes.
 */

class Smartphone {
public:
    // pure virtual function
    virtual void takeSelfie() = 0;
    virtual void makeCall() = 0;
};

class Android : public Smartphone {
    void takeSelfie() {
        cout << "[Android] - Selfie is taken....\n";
    }

    void makeCall() {
        cout << "[Android] - calling....\n";
    }
};

class IPhone : public Smartphone {
public:
    void takeSelfie() {
        cout << "[IPhone] - Selfie is taken....\n";
    }

    void makeCall() {
        cout << "[IPhone] - calling....\n";
    }
};

int main() {
    Smartphone *s1 = new Android();
    Smartphone *s2 = new IPhone();
    s1->takeSelfie();
    s2->takeSelfie();

    s1->makeCall();
    s2->makeCall();

    return 0;
}