#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;

class solution {
public:
  vector<int> twoSum(vector<int> &nums, int target) { return nums; }
};

int main() {
  vector<int> nums1   {2, 7, 11, 15};
  vector<int> nums2   {3, 2, 4};
  solution sol;
  vector<int> result_1 = sol.twoSum(nums1, 9);
  vector<int> result_2 = sol.twoSum(nums2, 6);

  for (int i = 0; i < nums1.size(); i++) {
    printf("%d : %d\n", i, nums1.at(i));
  }

  return 1;
}
