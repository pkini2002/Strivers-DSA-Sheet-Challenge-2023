class Solution {
public:
    bool isValid(string s) {
       stack<char>st;

       for(auto c:s){
           if(!st.empty() && st.top()=='(' && c==')'){
               st.pop();
           }
           else if(!st.empty() && st.top()=='{' && c=='}'){
               st.pop();
           }
           else if(!st.empty() && st.top()=='[' && c==']'){
               st.pop();
           }
           else{
               st.push(c);
           }
       }
       return st.empty();
    }
};
