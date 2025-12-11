#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int a = nums.size();
        int XOR=0;
        for(int i=0;i<a;i++){
            XOR=XOR^nums[i];
        }
        return XOR;
    }
};