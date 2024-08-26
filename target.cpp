#include<iostream>
using namespace std;
int firstoccurrence(int arr[],int size,int target)
{
 for(int i=0;i<size;i++) 
 {
    if(arr[i]==target){
    return i;
    }
 } 
 return-1;
}

int main()
{
    int arr[]={5,8,6,8,9,8,7};
    int size= sizeof (arr)/sizeof (arr[0]);
    int target=8;
    int index=firstoccurrence(arr,size,target);
    cout<<"the first occurance of "<<target<<" is at index"<< index<<" "<<endl;
    return 0;
}