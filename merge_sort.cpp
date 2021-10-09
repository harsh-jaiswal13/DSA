#include <iostream>

using namespace std;

void merge(int arr[],int l,int mid,int r)

{
    
	int n1=mid-l+1;

    int n2=r-mid;

    int a[n1];

    int b[n2];

    
for(int i=0;i<n1;i++)

	{
        
		a[i]=arr[l+i];
   
	 }

    for(int i=0;i<n2;i++)

    {

        b[i]=arr[mid+1+i];

    }

    
int i=0;

    int j=0;

    int k=l;

    while(i<n1 && j<n2)
	{
        
		if(a[i]<b[j])
		{

	            arr[k]=a[i];
	
            i++;

       		 }
        
		else{

            		arr[k]=b[j];
		
        j++;

        }
        k++;
    }
    while(i<n1)
    {
        arr[k]=a[i];
        i++;k++;
    }
    while(j<n2)
    {
        arr[k]=a[j];
        j++;k++;
    }
    
    
}
void merge_sort(int arr[], int l, int r)
{
  if(l<r){
      int mid=(l+r)/2;
      merge_sort(arr,l,mid);
      merge_sort(arr,mid+1,r);
      
      merge(arr,l,mid,r);
  }
}
 
int main() {
	// your code goes here
	int arr[]={9,8,7,5,3,2,1,1};
	merge_sort(arr,0,7);
	int n=7,i=0;
	while(n--)
	{   
	    cout<<arr[i]<<" ";
	    i++;
	}
	return 0;
}
