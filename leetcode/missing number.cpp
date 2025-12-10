#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int s2=0;
        int a=nums.size();
        double sum=(a*(a+1))/2;
        for(int i=0; i<a;i++)
        {
            s2+=nums[i];
        }
        return sum-s2;
        
    }
};