class Solution{
    public:
        long long pairWithMaxSum(long long arr[], long long N)
    {
        // Your code goes here
        long long maxi=-1,i;
        
        for(i=0;i<N-1;i++){
            maxi=max(maxi,arr[i]+arr[i+1]);
        }
        return maxi;
    }
};
