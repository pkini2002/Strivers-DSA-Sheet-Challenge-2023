class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        // code here
        stack<string>st;
        string ans="";
        
        for(int i=0;i<S.size();i++){
            if(S[i]=='.'){
                st.push(ans);
                st.push(".");
                ans="";
            }
            else{
                ans+=S[i];
            }
        }
        
        // for last word
        st.push(ans);
        ans="";
        
        // pop the ele
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        return ans;
    } 
};
