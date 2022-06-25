#include <iostream>

using namespace std;

int min_max(int arr[],int n)
{   int min,max;
    min = arr[0];
    max = arr[0];
    for(int i = 0;i<=n-1;i++)
    {
        if(arr[i]<arr[i+1])
           max = arr[i];

        if(arr[i]>arr[i+1])
          min = arr[i];

        
    }
    cout<<"Min element of array"<<min<<endl;
    cout<<"Max element of array"<<max<<endl;

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
    min_max(arr,n);

    return 0;


}