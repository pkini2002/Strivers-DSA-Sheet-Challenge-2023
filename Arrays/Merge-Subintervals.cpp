class Solution {
public:
    vector<vector<int>> overlappedInterval(vector<vector<int>>& intervals) {
         // Code here
         vector<vector<int>>res;
         
         sort(intervals.begin(),intervals.end());
         
         for(int i=0;i<intervals.size();i++){
             if(res.empty() || res.back()[1] < intervals[i][0]){
                 res.push_back(intervals[i]);
             }
             else{
                 res.back()[1]=max(res.back()[1],intervals[i][1]);
             }
         }
         return res;
    }
};
