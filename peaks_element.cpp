#include <iostream>

using namespace std;

int peak_element(int arr[],int n)
{
    if(n==0)
      return 0;
    
    if(arr[0]>=arr[1])
      return 0;
  
   if(arr[n-1]>=arr[n-2])
     return arr[n-1];

    for(int i =0;i<n-1;i++)
    {
        if(arr[i]>=arr[i+1]&& arr[i]>=arr[i-1])
          return arr[i];
    }

}
    
int main()
{
    int n;
    int arr[n];
    cout<<"Enter Size of array :";
    cin>>n;
    cout<<"Enter elements of Array :" ;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int result =peak_element(arr,n);   

    cout<<"Peak Element of the array :" <<result;

    return 0;

}