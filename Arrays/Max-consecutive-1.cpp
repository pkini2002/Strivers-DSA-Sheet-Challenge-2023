// GFG Max no of 1's by  flipping atmost m 0's

class Solution{
public:
    // m is maximum of number zeroes allowed to flip
    // n is size of array
    int findZeroes(int arr[], int n, int m) {
        // code here
        int count=0; // total count of 0's in the array
        int maxLen=0; // max length of the array with atmost m 0's
        int left=0; //left ptr of the window
        
        for(int right=0;right<n;right++){
            if(arr[right]==0){
                count++;
            }
        while(count>m){
            if(arr[left]==0){
                count--;
            }
            left++;
        }
          maxLen=max(maxLen,right-left+1);
        }
        return maxLen;
    }  
};

// Leetcode

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;
        int maxi=0;
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                count=0;
            }
            else{
                count++;
                maxi=max(maxi,count);
            }
        }
        return maxi;
    }
};
