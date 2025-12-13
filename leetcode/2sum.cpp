
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;

        for(int i = 0; i < nums.size(); i++) {
            int a = nums[i];
            int result = target - a;

            if(mp.find(result) != mp.end()) {
                return {mp[result], i};
            }

            mp[a] = i;   
        }

        return {-1, -1};
    }
};
