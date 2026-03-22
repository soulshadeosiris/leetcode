#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
using namespace std;


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hashMap;
        int complement;
        for (int i = 0; i < nums.size(); i++) {
            complement = target - nums[i];

            if (hashMap.count(complement)) {
                return {hashMap[complement], i};
            }
            hashMap[nums[i]] = i;
        }
        return {};
    }
};