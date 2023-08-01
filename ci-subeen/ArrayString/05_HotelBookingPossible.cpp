#include <bits/stdc++.h>
using namespace std;

bool hotelBookingsPossible(vector<int>& arrivals, vector<int>& departures, int hotelRooms) {
    map<int, int> mp;
    for (int i = 0; i < arrivals.size(); i++) {
        for (int j = arrivals[i]; j < departures[i]; j++) {
            mp[j]++;
            if (mp[j] > hotelRooms) {
                return false;
            }
        }
    }

    return true;
}

// O(nlogn) solution
bool hotelBookingsPossibleFaster(vector<int>& arrivals, vector<int>& departures, int hotelRooms) {
    sort(arrivals.begin(), arrivals.end());
    sort(departures.begin(), departures.end());

    int count = 0;
    int i = 0, j = 0;
    int n = arrivals.size();

    /*
        first sort both arrivals and departures array
        then count the person based on compare both arrivals[i] and departures[j]
        if arrivals[i] < departures[j] then count++, if count > k return false; i++
        else count--; j++;

        finally return true;
    */

    while (i < n and j < n) {
        if (arrivals[i] < departures[j]) {
            count++;

            if (count > hotelRooms) {
                return false;
            }
            i++;
        } else {
            count--;
            j++;
        }
    }

    return true;
}

int main() {
    vector<int> arrivals = {1, 3, 5};
    vector<int> departures = {2, 6, 8};
    int hotelRooms = 1;

    if (hotelBookingsPossible(arrivals, departures, hotelRooms)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    if (hotelBookingsPossibleFaster(arrivals, departures, hotelRooms)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}