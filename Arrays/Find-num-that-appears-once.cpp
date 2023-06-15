// Leetcode soln

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i+=2){
            if(nums[i]!=nums[i-1]){
                return nums[i-1];
            }
        }
        return nums[nums.size()-1];
    }
};

// GFG Soln

class Solution{
public:	
	int search(int A[], int N){
	    //code
	    for(int i=0;i<N;i+=2){
	        if(A[i]!=A[i+1]){
	            return A[i];
	        }
	    }
	    return -1;
	}
};
