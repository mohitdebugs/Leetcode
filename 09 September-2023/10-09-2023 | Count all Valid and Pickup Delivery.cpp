class Solution {
const int M=1e9+7;
public:
    int countOrders(int n) {
        long long c = 1;
        for (int j=2;j<=n;j++) {
            c=(c*(2*j-1)*j)%M;
        }
        return (int)c;
    }
};
