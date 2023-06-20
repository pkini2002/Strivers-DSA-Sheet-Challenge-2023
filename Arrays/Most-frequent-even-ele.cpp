class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        map<int,int>mpp;

        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0){
                mpp[nums[i]]++;
            }
        }

        int maxi=INT_MIN;
        int val=-1;
        for(auto it:mpp){
            if(it.second>maxi){
                maxi=it.second;
                val=it.first;
            }
        }
        return val;
    }
};
