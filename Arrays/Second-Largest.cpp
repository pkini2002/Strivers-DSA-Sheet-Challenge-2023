class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    // code here
	    sort(arr,arr+n);
	    for(int i=n-1;i>=0;i--){
	        if(arr[i]!=arr[n-1]){
	            return arr[i];
	        }
	    }
	    return -1;
	}
};
