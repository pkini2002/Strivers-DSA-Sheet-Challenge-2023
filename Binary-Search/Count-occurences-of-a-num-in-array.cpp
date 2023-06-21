class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int count(int arr[], int n, int x) {
	    // code here
	    bool check=binary_search(arr,arr+n,x);
	    
	    // If ele is not present in array
	    if(check==false){
	        return 0;
	    }
	    
	    int lb=lower_bound(arr,arr+n,x)-arr;
	    int ub=upper_bound(arr,arr+n,x)-arr-1;
	    
	    return ub-lb+1;
	}
};
