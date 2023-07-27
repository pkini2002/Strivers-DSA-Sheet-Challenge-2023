class Solution {
public:
    string reverseWords(string s) {
        string res="";
        stack<string>st;

        for(int i=0;i<s.length();i++){
            char ch=s[i];
            if(ch==' '){
                if(res!=""){
                    st.push(res);
                    res="";
                }
            }
            else{
                res+=s[i];
            }
        }

        if(res!=""){
           st.push(res);
        }
        string result="";

        while(!st.empty()){
            string val=st.top();
            result+=val;
            result+=" ";
            st.pop();
        }

        result.pop_back();
        return result;
    }
};
