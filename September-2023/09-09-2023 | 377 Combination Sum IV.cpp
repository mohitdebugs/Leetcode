class Solution {
public:
    int combinationSum4(vector<int>& nums, int target) {
        vector<unsigned> ans(target+1,0);
        ans[0]=1;
        for(int j=1;j<=target;j++)
        {
            for (int a: nums)
            {
                if (j>=a)
                    ans[j]=ans[j]+ans[j-a];
            }
        }
        return ans[target];  
    }
};
