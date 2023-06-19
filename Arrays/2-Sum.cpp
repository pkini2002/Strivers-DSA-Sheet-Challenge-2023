class Solution{
    public:
    vector<pair<int,int>> allPairs(int A[], int B[], int N, int M, int X)
    {
        // Your code goes here 
        // 2 ptr approach
        vector<pair<int ,int>> res;
        sort(A,A+N);
        sort(B,B+M);
        int left=0;
        int right=M-1;
        
        while(left<N && right>=0){
            int sum=A[left]+B[right];
            if(sum<X){
                left++;
            }
            else if(sum>X){
                right--;
            }
            else{
                res.push_back(make_pair(A[left], B[right]));
                left++;
                right--;
            }
        }
        return res;
    }
};
