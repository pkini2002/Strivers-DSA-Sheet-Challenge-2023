int upperBound(vector<int> &arr, int x, int n){
	// Write your code here.	
	int ub=upper_bound(arr.begin(),arr.end(),x)-arr.begin();
	return ub;
}
