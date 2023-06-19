class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
        
        // Your code here
        long long sum=0;
        long long maxi=INT_MIN;
        
        for(int i=0;i<n;i++){
            if(sum<0){
                sum=0;
            }
            sum+=arr[i];
            maxi=max(maxi,sum);
        }
        return maxi;
    }
};