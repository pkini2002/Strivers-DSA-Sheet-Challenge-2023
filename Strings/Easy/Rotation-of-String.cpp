class Solution
{
    public:
    //Function to check if two strings are rotations of each other or not.
    bool areRotations(string s1,string s2)
    {
        // Your code here
        if(s1.size()!=s2.size()){
            return 0;
        }
        
        // Concatenate string 1 with itself
        string res=s1+s1;
        
        if(res.find(s2)!=-1){
            return 1;
        }
        return 0;
    }
};
