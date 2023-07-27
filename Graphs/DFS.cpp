class Solution {
  public:
    // Function to return a list containing the DFS traversal of the graph.
    void dfsTraversal(int node,vector<int> adj[],int vis[],vector<int> &dfs){
        // Visit the node
        vis[node]=1;
        // Push the node to dfs vector
        dfs.push_back(node);
        
        // Trverse its neightbours
        for(auto it:adj[node]){
            // If not visited then call dfs traversal for that node again
            if(!vis[it]){
                dfsTraversal(it,adj,vis,dfs);
            }
        }
    }
    
    
    
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        // Creation of visited array with all 0's intitially
        int vis[V]={0};
        int start=0;
        vector<int>dfs;
        dfsTraversal(start,adj,vis,dfs);
        return dfs;
    }
};
