class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        map<int,int>mpp;
        vector<int>v;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }

        for(auto it:mpp){
            if(it.second > (nums.size()/3)){
                v.push_back(it.first);
            }
        }
        return v;
    }
};
