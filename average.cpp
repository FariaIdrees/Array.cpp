
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
int avgArray(int arr[],int size)
    {
    int sum=sumArray(arr,size);
    return sum/size;
    }
int main()
{
int arr[3]={3,5,7};
int size=sizeof (arr)/sizeof (arr[3]);
int average=avgArray(arr,size);
cout<<"the average of arr:"<<average<<endl;
    return 0;
}