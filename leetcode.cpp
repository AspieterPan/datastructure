#include "leetcode.h"
#include <algorithm>
#include <iostream>
#include <stdio.h>
#include <unordered_map>
#include <vector>
using namespace std;

vector<int> solution::twoSum(vector<int> &nums, int target) {
  // 暴力解法
  // int left_cur;
  // int right_cur;
  // vector<int> result(2);

  // for (left_cur = 0; left_cur < nums.size(); left_cur++) {
  //   for (right_cur = left_cur + 1; right_cur < nums.size(); right_cur++) {
  //     if (nums.at(left_cur) + nums.at(right_cur) == target) {
  //       result[0] = left_cur;
  //       result[1] = right_cur;
  //       return result;
  //     }
  //   }
  // }
  // result[0] = -1;
  // result[1] = -1;

  // return result;

  // 优雅解法
  unordered_map<int, int> hashmap;
  for (int i = 0; i < nums.size(); ++i) {
    auto it = hashmap.find(target - nums[i]);
    if (it != hashmap.end()) {
      return {it->second, i};
    }
    hashmap[nums[i]] = i;
  }
  return {};
}

int solution::lengthOfLongestSubstring(string s) {
  int left_cur;
  int right_cur;
  int max_count = 0;
  int count = 0;
  if(s.empty()) return 0; 
  for (left_cur = 0; left_cur < s.size(); left_cur++) {
    count = 0;
    for (right_cur = left_cur + 1; right_cur < s.size(); right_cur++) {
      count++;
      if (s[right_cur] == s[left_cur]) {
        max_count = max(count, max_count);
        break;
      }
    }
  }
  return max_count;
}

int main() {
  vector<int> nums1{2, 7, 11, 15};
  vector<int> nums2{3, 2, 4};
  vector<string> str{"abcabcbb", "bbbbb", "pwwkew"};
  solution sol;
  vector<int> result_1 = sol.twoSum(nums1, 26);
  vector<int> result_2 = sol.twoSum(nums2, 6);

  // for (int i = 0; i < result_1.size(); i++) {
  //   printf("%d : %d \n", i, result_1[i]);
  // }
  cout<<str[0]<<" : "<< sol.lengthOfLongestSubstring(str[0])<<endl;
  cout<<str[1]<<" : "<< sol.lengthOfLongestSubstring(str[1])<<endl;
  cout<<str[2]<<" : "<< sol.lengthOfLongestSubstring(str[2])<<endl;

  return 1;
}
