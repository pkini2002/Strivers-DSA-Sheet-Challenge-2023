class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        // Sort the vector
        sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<vector<int>>ans;

        for(int i=0;i<n;i++){
            // If it is not 1st ele and consecutive ele are same then just move front till u get a different element
            if(i>0 && nums[i]==nums[i-1]){
                continue;
            }

            // Point j to the next ele after i
            int j=i+1;
            // Point k to the last ele
            int k=n-1;

            // when j pointer is less than k pointer
            while(j<k){
                int sum=nums[i]+nums[j]+nums[k];

                // If sum is less than 0 then increment low ptr
                if(sum<0){
                    j++;
                }
                // Else if sum is greater than 0 then decrement high ptr
                else if(sum>0){
                    k--;
                }
                else{
                    // If it is equal then insert it into vector and finally push it into final vector and simultaneously incr j ptr and decr k ptr
                    vector<int>temp={nums[i],nums[j],nums[k]};
                    ans.push_back(temp);
                    j++;
                    k--;

                    // If the j ptr is ptng to same value simply incr j ptr
                    while(j<k && nums[j]==nums[j-1]){
                        j++;
                    }

                    // If the k ptr is ptng to same value simply decr k ptr
                    while(j<k && nums[k]==nums[k+1]){
                        k--;
                    }
                }
            }
        }
        return ans;
    }
};
