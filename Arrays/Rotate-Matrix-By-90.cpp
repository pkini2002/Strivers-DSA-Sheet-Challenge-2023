class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        // Calculate the size of the matrix
        int n=matrix.size();

        // Find the transpose of the matrix
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }

        // Swap 1st and last ele
        for(int i=0;i<n;i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }

        // Print the matrix
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<matrix[i][j]<<" ";
            }
            cout<<endl;
        }
    }
};
