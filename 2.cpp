#include <iostream>
using namespace std;
int secLargeval(int arr[],int size)
{
    int larger=0;
    int secondlarger=-1;
    for(int i=0;i<size;i++)
    {
        if  (arr[i]>arr[larger]);
          larger=i;
    }
    for(int i=0;i,size;i++)
    {
        if(arr[i]!=arr[larger])
        {
            if(secondlarger==-1)
            secondlarger=i;
            else if(arr[i]>arr[secondlarger])
             secondlarger=i;
             }
    }
return secondlarger;
}
int main()
{
    int arr[]={14,32,17,49,22,36};
    int number=sizeof (arr)/sizeof (arr[0]);
    int seclarge=secLargeval(arr,number);
    cout<<"second larger value is:"<<arr[seclarge]<<endl;
    return 0;
}