// Bruteforce approach : You get TLE in GFG

class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        // Code here
        vector<int>res;
        int leader;
       for(int i=0;i<n;i++){
           leader=true;
           for(int j=i+1;j<n;j++){
               if(a[j]>a[i]){
                   leader=false;
                   break;
               }
           }
           if(leader==true){
               res.push_back(a[i]);
           }
       }
       return res;
    }
};

// Optimal Soln

class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        // Code here
        int maxi=INT_MIN;
        vector<int>res;
        for(int i=n-1;i>=0;i--){
            if(a[i]>=maxi){
                maxi=a[i];
                res.push_back(maxi);
            }
        }
        reverse(res.begin(),res.end());
        return res;
    }
};
