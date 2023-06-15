// Leetcode : Check whether array is sorted and rotated

lass Solution {
public:
    bool check(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        for(int i=1;i<n;i++){
            // if count increments more than 1 then its not sorted and rotated 
            // this count can increment once whenever the array is sorted
            // Ex: [5,6,9,1,2] here 9>1 so count will increment
            if(nums[i-1]>nums[i]){
                count++;
            }
        }

        // 2nd case to increment count when the array is already sorted
        if(nums[n-1]>nums[0]){
            count++;
        }
        return count<=1;
    }
};

// GFG : Check if array is sorted

class Solution {
  public:
    bool arraySortedOrNot(int arr[], int n) {
        // code here
        for(int i=1;i<n;i++){
            if(arr[i-1]>arr[i]){
                return false;
            }
        }
        return true;
    }
};
