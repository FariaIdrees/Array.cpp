#include<iostream>
using namespace std;
int sumArray(int arr[],int size)
{
    int sum=0;
    for (int i=0;i<size;i++)
    {
        sum+=arr[i];
    }
    return sum;
}
int main()
{
int arr[5]={1,2,3,4,5};
int size=sizeof (arr)/sizeof (arr[5]);
int sum=sumArray(arr,size);
cout<<"sum of array:"<<sum<<endl;
return 0;
}