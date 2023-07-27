class Solution {
public:
    int romanToInt(string s) {
        map<char, int> mpp = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000},
        };
        int sum=0;
        for(int i=0;i<s.length();i++){

            // In the case of 4 we write is as IV so since 5 > 1 it should subtract
            if(mpp[s[i]]<mpp[s[i+1]]){
                sum-=mpp[s[i]];
            }
            else{
                sum+=mpp[s[i]];
            }
        }
        return sum;
    }
};
