#include <bits/stdc++.h>
using namespace std;

class String {
    char *str_;
    size_t len_;

   public:
    String(char *s) : str_(strdup(s)), len_(strlen(str_)) {
        cout << "Constructor: ";
        print();
    }

    ~String() {
        cout << "Destructor: ";
        print();
        free(str_);
    }

    void print() { cout << "(" << str_ << ": " << len_ << ")" << endl; }
};

int main() {
    String s = "Hello";
    s.print();
}
