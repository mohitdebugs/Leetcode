class Solution {
bool cmp(string s1, string s2){
        if(s1.size()-1 != s2.size()) return false;
        int first=0, second=0, notmatch=0;
        while(first<s1.size() && second<s2.size()){
            if(s1[first] != s2[second]){
                first++;
                notmatch++;
                if(notmatch>1) return false;
            }
            else{
                first++;
                second++;
            }
        }
        return (second==s2.size());
    }
    static bool comp(string s1, string s2){
        return s1.size()<s2.size();
    }
public:
    int longestStrChain(vector<string>& words) {
        sort(words.begin(), words.end(), comp);
        int n=words.size(), ans=1;
        vector<int> dp(n, 1);
        for(int i=0; i<n; i++){
            for(int j=0; j<i; j++){
                if(cmp(words[i],words[j])){
                    dp[i]=max(dp[i], dp[j]+1);
                    ans=max(ans, dp[i]);
                }
            }
        }
        return ans;
    }
};
