// Ctrl+B to run the code
// Author: Prathiksha Kini

#include<bits/stdc++.h>

using namespace std; 

void insertionsort(int a[],int n){
	for(int i=0;i<n;i++){
		int j=i;
		while(j>0 && a[j-1]>a[j]){
              int temp=a[j-1];
              a[j-1]=a[j];
              a[j]=temp;
              j--;
		}
	}

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
    insertionsort(a,n);

	return 0;
}

// GFG

class Solution
{
    public:
    // void insert(int arr[], int i)
    // {
    //     //code here
    // }
     public:
    //Function to sort the array using insertion sort algorithm.
    void insertionSort(int arr[], int n)
    {
        //code here
        for(int i=1;i<n;i++){
            int j=i;
            
            while(j>0 && arr[j-1]>arr[j]){
                int temp=arr[j-1];
                arr[j-1]=arr[j];
                arr[j]=temp;
                j--;
            }
        }
    }
};
