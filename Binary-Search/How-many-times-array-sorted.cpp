class Solution{
public:	
	int findKRotation(int arr[], int n) {
	    // code here
	   int low=0;
	   int high=n-1;
	   
	   int count=INT_MAX;
	   int index=-1;
	   
	   while(low<=high){
	       int mid=(low+high)/2;
	       
	       if(arr[low]<=arr[high]){
	           if(arr[low]<count){
	               index=low;
	               count=arr[low];
	           }
	          break;
	       }
	       
	       if(arr[low]<=arr[mid]){
	           if(arr[low]<count){
	               index=low;
	               count=arr[low];
	           }
	           low=mid+1;
	       }
	       
	       if(arr[mid]<=arr[high]){
	           if(arr[mid]<count){
	               index=mid;
	               count=arr[mid];
	           }
	            high=mid-1;
	       }
	   }
	   return index;
	}

};


// Other way

class Solution{
public:	
	int findKRotation(int arr[], int n) {
	    // code here
	    int count=0;
	   for(int i=0;i<n;i++){
	       if(arr[n-1]<arr[i]){
	           count++;
	       }
	       else{
	           break;
	       }
	   }
	   return count;
	}
};
