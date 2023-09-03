class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> a(n + 1, 0);
        int sub = 1;
        for (int i = 1; i <= n; i++) {
            if (sub * 2 == i) {
                sub = i;
            }
            a[i] = a[i - sub] + 1;
        }
        return a;
    }
};
