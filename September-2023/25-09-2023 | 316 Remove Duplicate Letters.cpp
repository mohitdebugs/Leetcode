class Solution {
public:
    string removeDuplicateLetters(string s) {
        unordered_map<char, int> lastIdx;
        unordered_map<char, bool> visited;
        stack<char> st;
        string ans = "";
        for(int i = 0; i < s.size(); i++)
            lastIdx[s.at(i)] = i;
        

        for(int i = 0; i < s.size(); i++)
        {
            char ch = s.at(i);
            if(visited[ch]) continue;

            while(!st.empty() && ch < st.top() && i < lastIdx[st.top()])
            {
                visited[st.top()] = false;
                st.pop();
            }
            st.push(ch);
            visited[ch] = true;
        }

        while(!st.empty())
        {
            ans += st.top();
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
