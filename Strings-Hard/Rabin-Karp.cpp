class Solution {
public:
    int repeatedStringMatch(string a, string b) {
        // Initialize count=1
        int count=1;

        // Initialize string a to s
        string s=a;

        // Add string a to s repeatedly until the length of s is atleast that of b and increment count to indicate how many times u have appended the same string 
        while(s.length() < b.length()){
            s+=a;
            count++;
        }

        // Not check whether string b is present in a if yes return count
        if(s.find(b)!=string::npos){
            return count;
        }
        // Try appending a once more and check if b is found if yes return count+1 since u have appended a one more time else return -1
        s+=a;
        if(s.find(b)!=string::npos){
            return count+1;
        }
        return -1;
    }
};
