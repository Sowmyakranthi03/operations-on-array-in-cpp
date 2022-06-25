/* Insertion , Searching and deletion on Unsorted array*/
#include <iostream>
using namespace std;

int find_element(int arr[],int n,int key);
int search(int arr[],int n,int key);
int insertion(int arr[], int n ,int key,int capacity);
int deletion(int arr[],int n,int key);


int find_element(int arr[],int n,int key)
{
    for(int i=0;i<=n;i++)
    {
      if(arr[i]==key)
        return i;
      
    }
  return -1;       
}

int search(int arr[],int n,int key)
{
    int pos =find_element(arr,n,key);
    if(pos ==-1)
      printf("Element not found");
    else 
      printf("Element found at postion : arr[ %d ]",pos+1);    

}

int insertion(int arr[], int n ,int key,int capacity)
{
    if(n>=capacity)
      return n;
    else 
      arr[n]= key;
        return (n+1);
}
int deletion(int arr[],int n,int key)
{
    int pos = find_element(arr,n,key);
    if(pos==-1)
      printf("Element not found");
    else 
     for(int i = pos;i<=n;i++)
       arr[i]= arr[i+1];

  return n-1;
}
int print(int arr[],int n,int key)
{ 
    printf("Elements in array: \n");
    for(int i=0;i<n;i++)
      printf("%d  ",arr[i]);
}



int main()
{
    int arr[20],n,choice,key;
    int capacity = sizeof(arr)/sizeof(arr[0]);
    printf("Enter the size of array:");
    scanf("%d",&n);
    printf("Enter elements in array:");
    for(int i=0;i<n;i++)
      
      scanf("%d",&arr[i]);
    
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
           search(arr,n,key);
           break;
        case 4:
          print(arr,n,key);  
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
/*By Sowmya Kranthi*/