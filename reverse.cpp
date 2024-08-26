#include<iostream>
using namespace std;
int revArray(int arr[],int size){
int start=0;
int end=size-1;
while(start<end)
{
    int temp=arr[start];
    arr[start]=arr[end];
    arr[end]=temp;
    start++;
    end--;
}
}
int main()
{
    int arr[5]={3,4,6,8,9};
    int size=sizeof (arr)/sizeof (arr[0]);   
    revArray(arr,size);
  cout<<"the reverse array:"<<endl;
  for(int i=0;i<size;i++)
  {
cout<<arr[i]<<" ";
  }
    return 0;
}