// GFG

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


// Leetcode

class Solution {
public:
    string reverseWords(string s) {
        string ans="";
        stack<string>st;

        for(int i=0;i<s.size();i++){
            char ch=s[i];

            if(ch==' '){
                if(ans!=""){
                    st.push(ans);
                }
               ans="";
            }
            else{
                ans+=ch;
            }
        }

        // for the last word
        if(ans!=""){
            st.push(ans);
        }

        string res="";

        while(!st.empty()){
            res+=(st.top()+" "); // to give space b/w words
            st.pop();
        }

        // to remove last space inserted after the last word
        res.pop_back();
        return res;
    }
};
