class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        // Stores bfs traversal of the graph
        vector<int>bfs;
        queue<int>q;
        // Visited array
        int vis[V]={0};
        vis[0]=1; // Initially we are visiting the root node
        q.push(0); // Pushing the root node
        
        while(!q.empty()){
            int val=q.front();
            q.pop();
            // Push it into bfs vector
            bfs.push_back(val);
            
            for(auto it:adj[val]){
                if(!vis[it]){
                    vis[it]=1;
                    q.push(it);
                }
            }
        }
        return bfs;
    }
};
