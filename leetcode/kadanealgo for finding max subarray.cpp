#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int a = nums.size();
      int  maxi=INT_MIN;
       int sum=0;
        for(int i=0;i<a;i++){
            sum=sum+nums[i];
            if(sum>maxi){
                maxi=sum;
            }
             if(sum<0){
                sum=0;
            }

        }
        return maxi;
    }
};