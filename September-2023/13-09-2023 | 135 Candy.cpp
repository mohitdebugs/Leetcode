class Solution {
public:
    int candy(vector<int>& ratings) {
        int n = ratings.size() ;
        vector<int> candy(n, 1) ;
        for(int i = 0; i<n-1; i++) {
            if(ratings[i+1] > ratings[i])
                candy[i+1] = candy[i] + 1 ; 
        }
        for(int i = n-1; i>0; i--) {
            if(ratings[i-1] > ratings[i] && candy[i-1] <= candy[i])
                candy[i-1] = candy[i] + 1 ; 
        }
        int total = 0 ;
        for(int i = 0; i<n; i++)
            total = total + candy[i] ;
        return total ;
    }    
    
};
