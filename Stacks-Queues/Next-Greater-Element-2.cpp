class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans;

        for(int i=0;i<n;i++){
            bool sign=true;
            for(int j=(i+1)%n;i!=j;j=(j+1)%n){
                if(nums[i]<nums[j]){
                    ans.push_back(nums[j]);
                    sign=false;
                    break;
                }
            }
            if(sign){
                ans.push_back(-1);
            }
        }
        return ans;
    }
};
