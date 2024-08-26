#include <iostream>
using namespace std;
int concateArr(int val1[],int val2[],int size1,int size2)
{
int val3[0];
for(int i=0;i<size1;i++)
{
    val3[i]=val1[i];
}
for(int i=0;i<size1;i++)
{
    val3[size1+i]=val2[i];
}
return val3[0];
}
int main() 
{
int arr1[4]={5,10,15,20};
int size1=sizeof (arr1)/sizeof (arr1[0]);
int arr2[4]={25,30,35,40};
int size2=sizeof (arr2)/sizeof (arr2[0]);
int size={size1 + size2};
int val3[size];
concateArr(arr1,arr2,size1,size2);
cout<<"concatinated array:"<<val3[0]<<endl;
return 0;

}