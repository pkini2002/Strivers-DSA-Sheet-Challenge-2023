class Solution {
public:
    void dfs(int node,vector<int>adjLs[],vector<int>&vis){
        vis[node]=1;

        for(auto it:adjLs[node]){
            if(!vis[it]){
                dfs(it,adjLs,vis);
            }
        }
    }

    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();

        // Conversion of adjacency matrix to adjacency list
        vector<int>adjLs[n];

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(isConnected[i][j]==1 && i!=j){
                    adjLs[i].push_back(j);
                    adjLs[j].push_back(i);
                }
            }
        }

         // Visited array
        vector<int> vis(n, 0);
        int count=0;

        for(int i=0;i<n;i++){
            if(!vis[i]){
                count++;
                dfs(i,adjLs,vis);
            }
        }
        return count;
    }
};
