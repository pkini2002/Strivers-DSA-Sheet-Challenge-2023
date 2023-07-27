class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        // A vector to store the final answer of spiral matrix
        vector<int>ans;

        int m=matrix.size(); // Indicates num of rows in matrix
        int n=matrix[0].size(); // Indicates num of cols in matrix

        int tot_element=m*n;

        int startRow=0;
        int endRow=m-1;
        int startCol=0;
        int endCol=n-1;
        int count=0;

        while(count<tot_element){
            // Printing starting row
            for(int i=startCol;i<=endCol && count<tot_element;i++){
                ans.push_back(matrix[startRow][i]);
                count++;
            }

            // Move to next row
            startRow+=1;

            // Print last col
            for(int i=startRow;i<=endRow && count<tot_element;i++){
                ans.push_back(matrix[i][endCol]);
                count++;
            }

            // Decrement col number after printing last
            endCol-=1;

            // Print last row
            for(int i=endCol;i>=startCol && count<tot_element;i--){
                ans.push_back(matrix[endRow][i]);
                count++;
            }

            // Moving up after printing the last row
            endRow-=1;

            // Print start col
            for(int i=endRow;i>=startRow && count < tot_element;i--){
                ans.push_back(matrix[i][startCol]);
                count++;
            }

            startCol+=1;
        }
        return ans;
    }
};
