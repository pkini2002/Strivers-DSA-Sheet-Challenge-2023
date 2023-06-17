class Solution
{
    public:
    //Function to check if two strings are isomorphic.
    bool areIsomorphic(string str1, string str2)
    {
        
        // Your code here
        // Used to store individual ele of str1 and str2 as a pair in a set
        set<pair<char,char>>s;
        
        // To store unique elements present in string str1 and str2
        set<char>s1,s2;
        
        // if string lengths are unequal then they r not isomorphic
        if(str1.size()!=str2.size()){
            return 0;
        }
        
        for(int i=0;i<str1.size();i++){
            // storing only unique elements
            s1.insert(str1[i]);
            s2.insert(str2[i]);
            // used to check whether their relative order is it same or not?
            s.insert({str1[i],str2[i]});
        }
        return (s1.size()==s2.size() && (s2.size()==s.size()));
        
    }
};
