class Solution {
  public:
    string armstrongNumber(int n){
        // code here
        int num=n;
        int ans=0;
        int sum=0;
        while(n!=0){
            int digit=n%10;
            ans=pow(digit,3);
            sum+=ans;
            n/=10;
        }
        
        if(sum==num){
            return "Yes";
        }
        else{
            return "No";
        }
    }
};
