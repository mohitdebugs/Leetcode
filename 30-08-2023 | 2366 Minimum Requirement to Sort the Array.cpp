class Solution {
public:
    long long minimumReplacement(vector<int>& nums) {
        long long op = 0;
        long long pr = nums.back();
        for (auto it = nums.rbegin() + 1; it != nums.rend(); ++it) {
            long long num = *it;
            long long no = (num + pr - 1) / pr;
            op += no - 1;
            pr = num/no;
        }
        
        return op;
    }
};
