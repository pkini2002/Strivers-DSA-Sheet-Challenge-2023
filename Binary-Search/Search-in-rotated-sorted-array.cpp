bool searchInARotatedSortedArrayII(vector<int>&A, int key) {
    // Write your code here.
    int low=0;
    int high=A.size()-1;

    while(low<=high){
        int mid=(low+high)/2;

        if(A[mid]==key){
            return true;
        }

        // Left sorted
        if(A[low]<=A[mid]){
            if(A[low]<=key && key<=A[mid]){
                 high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        else{
            if(A[mid]<=key && key<=A[high]){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
    }
    return false;
}
