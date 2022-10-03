#include <bits/stdc++.h>
using namespace std;

/**
 * @brief virtual keyword
 * Most derived function is executed.
 */

class Instrument {
public:
    /**
     * @brief It forces every derived class to implement
     *        this classes.
     */
    virtual void pure_virtual() = 0;
    virtual void makeSound() {
        cout << "Instrument playing...\n";
    }
};

class Accordion : public Instrument {
public:
    void makeSound() {
        cout << "Accordion playing...\n";
    }

    void pure_virtual() {
        cout << "Without implement this method, you are get a compilation error!\n";
    }

    // virtual void pure_virtual() {} // kind of pass in python 
};

class Piano : public Instrument {
public:
    void pure_virtual() {
        cout << "Piano is playing...\n";
    }

    void makeSound() {
        cout << "Piano is playing...\n";
    }
};

int main() {
    // we must need to create a pointer.
    // type base : object derived
    Instrument *i1 = new Accordion();
    // i1->makeSound();
    // i1->pure_virtual();

    Instrument *i2 = new Piano();
    // i2->pure_virtual();

    Instrument *instruments[2] = {i1, i2};

    for (int i = 0; i < 2; i++) {
        instruments[i]->makeSound();
    }
}