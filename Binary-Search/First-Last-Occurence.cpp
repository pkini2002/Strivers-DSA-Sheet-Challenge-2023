#include<bits/stdc++.h>
class Solution {
public:

    vector<int> searchRange(vector<int>& nums, int target) {
       /*Inbuilt binary search function of c++ that returns true if element is  found
       */
       bool check=binary_search(nums.begin(),nums.end(),target);
       if(check==false){
           return {-1,-1};
       }

       int first_occ=lower_bound(nums.begin(),nums.end(),target)-nums.begin();
       int last_occ=upper_bound(nums.begin(),nums.end(),target)-nums.begin()-1;
       return {first_occ,last_occ};
    }
};
