// Brute force approach

/*

1. Generate all sorted possible permutations
2. Perform Linear Search
3. Find the next permutation

Time Complexity: N! X N

*/

// Better Solution using STL next_permutaion built 

class Solution{
public:
    vector<int> nextPermutation(int N, vector<int> arr){
        // code here
        next_permutation(arr.begin(),arr.end());
        return arr;
    }
};


// Optimal Solution



