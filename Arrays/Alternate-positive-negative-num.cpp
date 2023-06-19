class Solution{
public:

	void rearrange(int arr[], int n) {
	    // code here
	    vector<int>pos;
	    vector<int>neg;
	    
	    for(int i=0;i<n;i++){
	        if(arr[i]>=0){
	            pos.push_back(arr[i]);
	        }
	        else{
	            neg.push_back(arr[i]);
	        }
	    }
	    
	   auto p=pos.begin();
	   auto  ne=neg.begin();
	   
	   int i=0;
	   
	   while(p!=pos.end() && ne!=neg.end()){
	       if(i%2==0){
	           arr[i]=*p;
	           p++;
	       }
	       else{
	           arr[i]=*ne;
	           ne++;
	       }
	       i++;
	   }
	   
	   // Check whether any +ve or -ve ele in vector is remaining
	   if(p!=pos.end()){
	       while(p!=pos.end()){
	           arr[i]=*p;
	           p++;
	           i++;
	       }
	   }
	   
	   if(ne!=neg.end()){
	       while(ne!=neg.end()){
	           arr[i]=*ne;
	           ne++;
	           i++;
	       }
	   }
	}
};
