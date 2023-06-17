class Solution {
  public:
    string maxOdd(string s) {
        // your code here
        int n=s.size();
        
        // we should iterate from end of the string because if the last digit is odd then the whole string is odd
        for(int i=n-1;i>=0;i--){
            // ascii to decimal conversion
            if((s[i]-'0')%2==1){
                // return a substring from beginning of the string to that index
                return s.substr(0,i+1);
            }
        }
        return "";
    }
};
