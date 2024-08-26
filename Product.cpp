#include<iostream>
using namespace std;
int productArray(int arr[],int size)
{
    int product=1;
    for (int i=1;i<size;i++)
    {
        product=product*arr[i];
    }
    return product;
}
int main()
{
int arr[5]={1,2,3,4,5};
int size=sizeof (arr)/sizeof (arr[5]);
int pro=productArray(arr,size);
cout<<"product of array:"<<pro<<endl;
return 0;
}