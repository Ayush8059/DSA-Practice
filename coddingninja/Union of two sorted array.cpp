#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        int i = 0;
        int j = 0;
        vector<int> uni;

        while (i < n1 && j < n2) {
            if (nums1[i] <= nums2[j]) {
                if (uni.size() == 0 || uni.back() != nums1[i])
                    uni.push_back(nums1[i]);
                i++;
            } else {
                if (uni.size() == 0 || uni.back() != nums2[j])
                    uni.push_back(nums2[j]);
                j++;
            }
        }


        while (i < n1) {
            if (uni.size() == 0 || uni.back() != nums1[i])
                uni.push_back(nums1[i]);
            i++;
        }

 
        while (j < n2) {
            if (uni.size() == 0 || uni.back() != nums2[j])
                uni.push_back(nums2[j]);
            j++;
        }

        return uni;
    }
};
