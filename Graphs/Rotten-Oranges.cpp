class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n=grid.size(); // Number of rows in the grid matrix
        int m=grid[0].size(); // Number of cols in the grid matrix

        // Define a queue of pair to store {{row,col},t}
        queue<pair<pair<int,int>,int>>q;

        // Define a visited matrix
        int vis[n][m];

        // Check for the rotten oranges in the graph so that we can start our DFS Traversal
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                // if it is 2 then it is rotten acc to the problem statement
                if(grid[i][j]==2){
                    // Push the row and col index and time
                    q.push({{i,j},0});
                    // Mark that as visited
                    vis[i][j]=2; 
                }
                else{
                    vis[i][j]=0;
                }
            }
        }

    // Since we can move top,right,left and bottom to make neighbouring oranges rotten
    // Let's maintain 2 different arrays which when summed up gives the indices of neighbours
        int drow[]={-1,0,1,0};
        int dcol[]={0,1,0,-1};

        int tm=0; // Min time required to rot the oranges
        while(!q.empty()){
            int r=q.front().first.first;
            int c=q.front().first.second;
            int t=q.front().second;
            q.pop();
            tm=max(tm,t);

            // Iterating over drow and dcol to find neighbours 
            for(int i=0;i<4;i++){
                int nrow=r+drow[i];
                int ncol=c+dcol[i];

                if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && vis[nrow][ncol]!=2 && 
                grid[nrow][ncol]==1){
                    // Push it into the queue
                    q.push({{nrow,ncol},t+1});
                    // Mark it as visited
                    vis[nrow][ncol]=2;
                }
            }
        }

        // Checking whether are there any oranges left in that case return -1 else return tm
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(vis[i][j]!=2 && grid[i][j]==1){
                    return -1;
                }
            }
        }
        return tm;
    }
};
