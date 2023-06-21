class Solution{
public:
    int findMin(int arr[], int n){
        //complete the function here
        int low=0;
        int high=n-1;
        int mini=INT_MAX;
        
        while(low<=high){
            int mid=(low+high)/2;
            
            // Check if left half is sorted
            if(arr[low]<=arr[mid]){
                mini=min(arr[low],mini);
                low=mid+1;
            }
            else{
                mini=min(arr[mid],mini);
                high=mid-1;
            }
        }
        return mini;
    }
};
