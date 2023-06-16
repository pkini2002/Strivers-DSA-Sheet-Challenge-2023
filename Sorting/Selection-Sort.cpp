class Solution
{
    public:
    void selectionSort(int arr[], int n)
    {
       int min;
       int temp;
       for(int i=0;i<=n-1;i++){
           min=i;
           for(int j=i+1;j<n;j++){
               if(arr[j]<arr[min]){
                   temp=arr[j];
                   arr[j]=arr[min];
                   arr[min]=temp;
               }
           }
           temp=arr[i];
           arr[i]=arr[min];
           arr[min]=temp;
       }
    }
};

// Full Code

#include<bits/stdc++.h>

using namespace std; 

void selectionsort(int a[],int n){
	int min;
	int temp;
	for(int i=0;i<n-1;i++){
		min=i;
		for(int j=i+1;j<n;j++){
			if(a[j]<a[min]){
				temp=a[j];
				a[j]=a[min];
				a[min]=temp;
			}
		}
		temp=a[i];
		a[i]=a[min];
		a[min]=temp;
	}

	cout<<"Elements after sorting is: "<<endl;
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}


int main(){
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
    #endif

   int n;
   cin>>n;

   int a[n];

   for(int i=0;i<n;i++){
   	cin>>a[i];
   }
    selectionsort(a,n);

	return 0;
}
