class Solution {
  public:
    string removeOuter(string& s) {
        // code here
        stack<char>st; // declare a stack
        string ans=""; // an empty string to store the resultant string after 1' decomposition
        
        // we need to push only parentheses inside stack
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                st.push(s[i]);
                // if there is already a ( parentheses inside then only store it in resultant string
                // By this we don't include the outermost parenthesis
                if(st.size()>1){
                    ans+=s[i];
                }
            }
            else{
                // If it is ) then pop corresponding ( from the stack
                // dont include last ) into the final resulting string
                if(st.size()>1){
                    ans+=s[i];
                }
                st.pop();
            }
        }
        return ans;
    }
};
