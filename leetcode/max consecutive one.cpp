#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {

        int a=nums.size();
        int count=0;
        int maximum=0;
        for(int i=0; i<a; i++){
            if(nums[i]==1){
                count++;
                maximum= max(maximum,count);
            }
            else{
                count=0;
               
            }
        }
        return maximum;
    }
};