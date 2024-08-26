#include<iostream>
using namespace std;
int maxVal(int arr[],int size)
{
    int max=arr[0];
    for(int i=0;i<size;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    return max;
}
int main()
{
    int arr[5]={2,6,8,7,3};
    int size=sizeof (arr)/sizeof (arr[0]);
    int maximum=maxVal(arr,size);
    cout<<"Maximum value in array:"<<maximum<<endl;
    return 0;
}