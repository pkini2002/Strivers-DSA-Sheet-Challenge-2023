// Leetcode

class Solution {
public:
    void rotate(vector<int>& arr, int k) {
        int n=arr.size();
        k=k%n; // to wrap the k value within the range of size of array
	   reverse(arr.begin(),arr.begin()+(n-k));
	   reverse(arr.begin()+(n-k),arr.end());
	   reverse(arr.begin(),arr.end());
    } 
};

// GFG

class Solution {
public:
    void rotate(vector<int>& arr, int k) {
        int n=arr.size();
        k=k%n; // to wrap the k value within the range of size of array
	   reverse(arr.begin(),arr.begin()+(n-k));
	   reverse(arr.begin()+(n-k),arr.end());
	   reverse(arr.begin(),arr.end());
    }
       
};

