class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        if(nums1.size()==0&&nums2.size()==0)
            return 0;
        nums1.insert(nums1.end(),nums2.begin(),nums2.end());
        sort(nums1.begin(),nums1.end());
        int n=nums1.size();
        double median;
        if(n%2==0)
        {
            median=(nums1[n/2]+nums1[(n/2)-1])/2.0;
        }
        else
        {
            median=nums1[n/2];
        }
        return median;
    }
};
