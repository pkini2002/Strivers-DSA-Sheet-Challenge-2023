// GFG

class Solution{
public:
    int remove_duplicate(int a[],int n){
        // code here
        int i=0;
        for(int j=1;j<n;j++){
            if(a[i]!=a[j]){
                i++;
                a[i]=a[j]; // removing duplicate ele from array
            }
        }
        return i+1;
    }
};
