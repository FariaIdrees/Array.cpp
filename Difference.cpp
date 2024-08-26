#include<iostream>
using namespace std;
int DiffVal(int arr[],int size)
{
    int max=arr[0];
    for(int i=0;i<size;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }

    int min=arr[0];
    for(int i=0;i<size;i++)
    {
        if(min>arr[i])
        {
            min=arr[i];
        }
    }
    return max-min;
}
int main()
{
    int arr[5]={2,6,8,7,3};
    int size=sizeof (arr)/sizeof (arr[0]);
    int Difference=DiffVal(arr,size);
    cout<<"Difference between max and min value in array:"<<Difference<<endl;
    return 0;
}