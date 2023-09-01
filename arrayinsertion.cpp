#include<bits/stdc++.h>
using namespace std;

int insertatend(int arr[],int n,int key,int size)
{
    if(n >= size)
    {
        return n;
    }

    arr[n] = key;

    return (n+1);
}


int insertelement(int arr[],int n,int x,int pos)
{
    for(int i=n-1;i>=pos;i--)
    {
        arr[i+1]=arr[i];
    }

    arr[pos]=x;
    return(n+1);
}

int insertedeleminasortedarray(int arr[],int n,int key,int size)
{
    if(n>=size)
    {
        return n;
    }
    int i;
    for( i=n-1;(i>=0 && arr[i] > key); i--)
    {
        arr[i + 1]=arr[i];
    }

    arr[i + 1] = key;

    return (n+1);
}
int main()
{
    //insertion in array 3 types
/*

Inserting Elements in an Array at the End
Inserting Elements in an Array at any Position in the Middle
Inserting Elements in a Sorted Array
    

*/
int n;
cout<<"Enter the number of elements you want to enter"<<endl;
cin>>n;
int arr[20];
for(int i=0;i<n;i++)
{
cin>>arr[i];
}
int size=sizeof(arr) / sizeof(arr[0]);

int key;
cout<<"Element you want to insert"<<endl;
cin>>key;
//int pos;
//cout<<"Element you want to enter at what pos"<<endl;
//cin>>pos;
// n= insertatend(arr,n,key,size); //O(1)
// n=insertelement(arr,n,key,pos);  //O(n)
// n=insertedeleminasortedarray(arr,n,key,size);  //O(n)
for(int i=0;i<n;i++)
{
    cout<<arr[i]<<" ";
}
cout<<endl;
return 0;
}