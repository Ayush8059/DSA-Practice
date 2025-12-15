#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ele;
        int count=0;
        int a= nums.size();
        for(int i=0;i<a;i++){
            if(count==0){
                count=1;
                ele=nums[i];
            }
            else if(nums[i]==ele){
                count++;
            }
            else{
                count--;
            }
        }
        int count1=0;
        for(int i =0; i<a;i++){
            if(ele==nums[i]){
                count1++;
            }
            if(count1>(a/2)){
                return ele;
            }
        }
        return -1;
    }
};