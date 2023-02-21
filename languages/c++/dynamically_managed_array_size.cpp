#include <iostream>
#include <vector>
using namespace std;

int main() {
	int count, sum = 0;

	cin >> count;

	vector<int> arr;
	arr.resize(count);      // set resize

	for (int i = 0; i < arr.size(); i++) {
		arr[i] = i;
		sum += arr[i];
	}
	cout << "Array sum: " << sum << endl;

	arr.resize(count + 10);
	for (int i = 0; i < count + 10; i++) {
		cout << arr[i] << " ";
	}
	cout << endl; 

	return 0;
}
