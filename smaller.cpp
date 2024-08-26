#include<iostream>
using namespace std;
int smallVal(int arr[],int size)
{
    int small=arr[0];
    for(int i=0;i<size;i++)
    {
        if(small>arr[i])
        {
            small=arr[i];
        }
    }
    return small;
}
int main()
{
    int arr[5]={2,6,8,7,3};
    int size=sizeof (arr)/sizeof (arr[0]);
    int Smaller=smallVal(arr,size);
    cout<<"Smallest value in array:"<<Smaller<<endl;
    return 0;
}