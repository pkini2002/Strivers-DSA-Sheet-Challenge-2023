class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        for(int i=0;i<nums1.size();i++){
            for(int j=0;j<nums2.size();j++){
                // They intersect at index i of nums1 and index j of nums2
                if(nums1[i]==nums2[j]){
                    int j=*max_element(nums2.begin()+j,nums2.end());
                    if(j>=nums2[j]){
                        ans.push_back(j);
                    }
                    else{
                        ans.push_back(-1);
                    }
                }
            }
        }
        return ans;
    }
};
