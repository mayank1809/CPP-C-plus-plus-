#include<bits/stdc++.h>
using namespace std;

int findele(int arr[],int n,int key)
{
    int i;
    for(int i=0;i<n;i++)
    {
        if(arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int findeleinsortedarray(int arr[],int n,int key)
{
    int i;
    for(int i=0;i<n;i++)
    {
        if (arr[i] == key)
            return i;
    }
    return -1;
}
int findeleusingbinarysearch(int arr[],int low,int high,int key)
{
    if(high<low)
    {
        return -1;
    }
    int mid=(low+high)/2;
    if(key == arr[mid])
        return mid;
    if(key>arr[mid])
        return findeleusingbinarysearch(arr,(mid+1),high , key);

    return findeleusingbinarysearch(arr,low,(mid-1),key);
}
int main()
{
    int n;
    cout<<"Number of elements you want to insert in array"<<endl;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    //Searching in arrays 
    /* 
    1)Searching in an Unsorted Array using Linear Search
    2)Searching in a Sorted Array using Linear Search
    3)Searching in a Sorted Array using Binary Search
    */
     int key;
     cout<<"Element you want to search "<<endl;
     cin>>key;
     int pos=0; //bydefault
    // int pos=findele(arr,n,key);
    // int pos=findeleinsortedarray(arr,n,key);
    // int pos=findeleusingbinarysearch(arr,0,n-1,key);
    if (pos == -1)
        cout << "Element not found";
    else
        cout << "Element Found at pos: "
             << pos + 1;
     
     }