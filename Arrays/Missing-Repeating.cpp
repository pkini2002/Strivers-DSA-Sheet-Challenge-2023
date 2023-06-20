class Solution{
public:
    vector<int> findTwoElement(vector<int> arr, int n) {
        // code here
        map<int,int>mpp;
        vector<int>res;
        
        for(int i=0;i<n;i++){
            mpp[arr[i]]++;
        }
        
        int maxi=INT_MIN;
        int val;
        for(auto it:mpp){
            if(it.second>maxi){
                maxi=it.second;
                val=it.first;
            }
        }
        
        res.push_back(val);
        for(int i=1;i<=n;i++)
        {
            if(mpp.find(i)==mpp.end())
                res.push_back(i);
        }
        return res;
    }
};
