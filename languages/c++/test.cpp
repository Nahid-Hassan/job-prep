#include <iostream>
using namespace std;

int main() {
	char *arr = {'a', 'b'};
	
	for (char c : arr) {
		cout << c << endl;
	}
}

