class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

    //    int len = nums2.size();
    //    for(int i = 0; i < len; i++){
    //        nums1.push_back(nums2[i]);
    //    }
        nums1.insert(nums1.end(),nums2.begin(),nums2.end());

        sort(nums1.begin(), nums1.end());

        int newLen = nums1.size();

        if (newLen % 2 == 1) {
            return nums1[newLen / 2.0];
        } else {
            return (nums1[newLen / 2 - 1] + nums1[newLen / 2]) / 2.0;
        }

        
        
    }
};