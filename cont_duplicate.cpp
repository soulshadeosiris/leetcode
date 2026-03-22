#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        std::unordered_set<int> n;

        for (int i = 0; i < nums.size(); i++) {
            if (n.contains(nums[i])) {
                return true;
            }
            n.insert(nums[i]);
        }
        return false;
    }
};