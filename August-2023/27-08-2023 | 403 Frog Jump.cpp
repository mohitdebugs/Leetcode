class Solution {
public:
    bool canCross(vector<int>& stones) {
        int num = stones.size();

        unordered_map<int, unordered_set<int>> ch;
        for (int stone : stones) {
            ch[stone] = std::unordered_set<int>();
        }
        ch[0].insert(0);

        for (int i = 0; i < num; i++) {
            for (int k : ch[stones[i]]) {
                for (int step = k - 1; step <= k + 1; step++) {
                    if (step != 0 && ch.count(stones[i] + step)) {
                        ch[stones[i] + step].insert(step);
                    }
                }
            }
        }
        
        return !ch[stones.back()].empty();
    }
};
