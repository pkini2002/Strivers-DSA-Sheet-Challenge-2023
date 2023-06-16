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
