#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int>& nums, int target){
  if(nums.size() == 0)
    return -1;

  int left = 0, right = nums.size() - 1;
  while(left <= right) {
    // Prevent (left + right) overflow
    int mid = left + (right - left) / 2;
    if(nums[mid] == target){ return mid; }
    else if(nums[mid] < target) { left = mid + 1; }
    else { right = mid - 1; }
  }

  // End Condition: left > right
  return -1;
}

/**
 * Initial Condition: left = 0, right = length-1
 * Termination: left > right
 * Searching Left: right = mid-1
 * Searching Right: left = mid+1
*/

int main() {

}