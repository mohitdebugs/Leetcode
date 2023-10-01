class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        vector<vector<int>> ans;
        unordered_map<int, vector<int>> gang;
        for (int i = 0; i < groupSizes.size(); i++) 
        {
            int size = groupSizes[i];
            gang[size].push_back(i);
            if (gang[size].size() == size) 
            {
                ans.push_back(gang[size]);
                gang.erase(size);
            }
        }
        return ans;    
    }
};
