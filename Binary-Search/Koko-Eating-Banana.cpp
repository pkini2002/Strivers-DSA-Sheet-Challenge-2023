// Leetcode

class Solution {
public:
    long long totTime(int mid,vector<int>&piles){
        long long sum=0;
        for(int i=0;i<piles.size();i++){
            sum+=(piles[i]/mid)+(piles[i]%mid!=0);
        }
        return sum;
    }


    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        // max element of array
        int high=*max_element(piles.begin(),piles.end());
        int ans=0;

        while(low<=high){
            int mid=low+(high-low)/2;
            if(totTime(mid,piles)<=h){
               ans=mid;
               high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};

// GFG

int totTime(int mid,vector<int>&piles){
    int sum=0;
    for(int i=0;i<piles.size();i++){
       if(piles[i]%mid==0){
          sum+=(piles[i]/mid);
       }
       else{
           sum+=(piles[i]/mid)+1;
       }
    }
    return sum;
}

class Solution {
  public:
    int Solve(int N, vector<int>& piles, int H) {
        // Code here
       int low=1;
       int high=*max_element(piles.begin(),piles.end());
       int finalans=0;
       
       while(low<=high){
           int mid=low+(high-low)/2;
           int time=totTime(mid,piles);
           
           if(time<=H){
               finalans=mid;
               high=mid-1;
           }
           else{
               low=mid+1;
           }
       }
       return finalans;
    }
};
