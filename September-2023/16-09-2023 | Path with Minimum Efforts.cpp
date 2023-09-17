class Solution {
public:
    int minimumEffortPath(vector<vector<int>>& heights) {
         int m=heights.size();

        int n=heights[0].size();
        priority_queue<vector<int>>pq;
        vector<vector<int>>vis(m,vector<int>(n,-1));
        pq.push({0,0,0});
        while(pq.size()!=0 && vis[m-1][n-1]==-1){
            vector<int>t=pq.top();
            pq.pop();
            int i=t[1];
            int j=t[2];
            int c=-1*t[0];
            if(vis[i][j]!=-1)continue;
            vis[i][j]=c;
            if(i-1>=0)pq.push({-1*max(c,abs(heights[i-1][j]-heights[i][j])),i-1,j});
            if(i+1<m)pq.push({-1*max(c,abs(heights[i+1][j]-heights[i][j])),i+1,j});
            if(j-1>=0)pq.push({-1*max(c,abs(heights[i][j-1]-heights[i][j])),i,j-1});
            if(j+1<n)pq.push({-1*max(c,abs(heights[i][j+1]-heights[i][j])),i,j+1});
        }
        return vis[m-1][n-1];
    }
};
