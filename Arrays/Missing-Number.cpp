// Bruteforce approach

int missingNumber(vector<int>&a, int N) {
    // Write your code here.  
    for(int i=1;i<=N;i++){
        int flag=0;
        // checking if i is present in array using linear search
        for(int j=0;j<N-1;j++){
            if(a[j]==i){
                flag=1;
                break;
            }
        }
        if(flag==0){
            return i;
        }
    }
    return -1;
}


// Optimal Approach
int missingNumber(vector<int>&a, int N) {
    // Write your code here.
    int sum1=(N*(N+1))/2;
    int sum2=accumulate(a.begin(),a.end(),0); // accumulate function is used to find sum of array or vector in C++ STL pass the address of start and last element nd initial value of sum=0
    return sum1-sum2;
}
