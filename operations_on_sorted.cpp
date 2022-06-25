#include <iostream>
using namespace std;

int binary_search(int arr[],int low,int high,int key);
int insertion(int arr[],int n,int key,int capacity);
int deletion(int arr[],int n, int key);
int print(int arr[],int n);


int binary_search(int arr[],int low,int high,int key)
{
    if(low>high)
      return -1;
    int mid;
    mid = (low+high)/2;

    if(arr[mid]==key)
      return mid;

    if(key>arr[mid])
      return binary_search(arr,(mid+1),high,key);
   return binary_search(arr,low,(mid-1),key);
}

int insertion(int arr[],int n,int key,int capacity)
{
 if(capacity<=n)
    return n;
  int i;
  for(i=n;i>=0;i--)
  {
    while(arr[i]>key)
    {
      arr[i+1] = arr[i];
      arr[i]= key;
    }
  }

  return (n+1);
}
int deletion(int arr[],int n, int key)
{
    int pos =binary_search(arr,0,n-1,key);

    if(pos==-1)
    {
        cout<<"Element not found"<<endl;
        return n;
    }
    int i;
    for(i=pos;i<=n-1;i++)
     arr[i]= arr[i+1];

   return n-1;      
}

int print(int arr[],int n)
{
    for(int i=0;i<n;i++)
      cout<<arr[i]<<"\t";
}

 
int main()
{
    
    int arr[20],n,choice,key,low,high;
    int capacity = sizeof(arr)/sizeof(arr[0]);
    printf("Enter the size of array:");
    scanf("%d",&n);
    printf("Enter elements in array:");
    for(int i=0;i<n;i++)
      
      scanf("%d",&arr[i]);
    
    low = 0;
    high = n-1;
    while(choice !=0)
    {
        printf("\n 1.Insertion\n 2.Deletion \n 3.Search\n 4.Print \n 0.exit \n" );        
        scanf("%d",&choice);

        switch (choice)
        {
        case 1:
            printf("Enter the element to be inserted\n");
            scanf("%d",&key);
            insertion(arr,n,key,capacity);
            break;
        case 2:
           printf("Enter the element to be deleted:\n");
           scanf("%d",&key);
           n = deletion(arr,n,key);
           break;
        case 3:
           printf("Enter the element to be searched:\n");
           scanf("%d",&key);
           cout<<"Element found at index:"<<arr[binary_search(arr,low,high,key)];

           break;
        case 4:
          print(arr,n);  
          break;
        case 0:
           break;      
        default:
           printf("Enter correct option ");
            break;
        }          
    }

    return 0;
    
}