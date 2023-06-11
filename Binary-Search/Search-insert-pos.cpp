int searchInsert(vector<int>& arr, int m)
{
	// Write your code here.
	int n=arr.size();
	int lb=lower_bound(arr.begin(),arr.end(),m)-arr.begin();
	return lb;
}
