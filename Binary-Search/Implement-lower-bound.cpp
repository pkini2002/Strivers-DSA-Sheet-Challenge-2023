class Solution{
  public:
    // Function to find floor of x
    // n: size of vector
    // x: element whose floor is to find
    int findFloor(vector<long long> v, long long n, long long x){
        long long lb=lower_bound(v.begin(),v.end(),x)-v.begin();
        if(lb==n){
            return n-1;
        }
        else if(lb>0){
            return lb;
        }
        else{
            return -1;
        }
    }
};
