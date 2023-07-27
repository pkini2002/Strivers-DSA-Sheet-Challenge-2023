class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        // Create a vector of vector to store the result
        vector<vector<int>>result;
        // Iterate from 1 to numRows
        for(int i=1;i<=numRows;i++){
            // Create a vector to store individual vectors of vector of vectors
            vector<int>temp;
            long long ans=1;
            // Insert 1 everytime into vector
            temp.push_back(ans);
            // Iterate from 1 to i to insert the sum of all ele upto i
            for(int j=1;j<i;j++){
                ans=ans*(i-j);
                ans=ans/j;
                temp.push_back(ans);
            }
            result.push_back(temp);
        }
        return result;
    }
};
