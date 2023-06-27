class Solution {
public:
    int possible(vector<int>& bloomDay,int mid, int m, int k){
        int count=0;
        int numofBoqueue=0;

        for(int i=0;i<bloomDay.size();i++){
            if(bloomDay[i]<=mid){
                count++;
            }
            else{
                numofBoqueue+=(count/k);
                count=0;
            }
        }
        numofBoqueue+=(count/k);
        return numofBoqueue>=m;
    }

    int minDays(vector<int>& bloomDay, int m, int k) {
        // Edge Case: If no of boqueues * flowers / boqueue > array size return -1
        if((long long)m*k > bloomDay.size()){
            return -1;
        }
        int low=*min_element(bloomDay.begin(),bloomDay.end());
        int high=*max_element(bloomDay.begin(),bloomDay.end());

        while(low<=high){
            int mid=low+(high-low)/2;

            if(possible(bloomDay,mid,m,k)){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};
