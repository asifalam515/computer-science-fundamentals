#include<bits/stdc++.h>
using namespace std;
void merged_two_arr(int size1,int size2,int arr1[],int arr2[])
{
int merged_size=size1+size2;
int mergedArr[merged_size];
int i=0;
int j=0;
int k=0;
while(i<size1 && j<size2)
{
    if(arr1[i]<arr2[j])
    {
        mergedArr[k]=arr1[i];//jeti soto seti thakbe
        i++;//ebong seti booro hoye jaabe

    }
    else
    {
        mergedArr[k]=arr2[j];
        j++;
    }
    k++;
}
while(i<size1)
{
    mergedArr[k]=arr1[i];
    i++;
    k++;
}
while(j<size2)
{
    mergedArr[k]=arr2[j];
    j++;
    k++;

}

for(i=0;i<merged_size;i++)
{
    cout<<mergedArr[i]<<" ";
}
}
int main()
{

  int arr1[]={1,5,7,9};
  int arr2[]={2,3,11,15,17,19};
int size1=sizeof(arr1)/sizeof(arr1[0]);
int size2=sizeof(arr2)/sizeof(arr2[0]);
merged_two_arr(size1,size2,arr1,arr2);

    return 0;
}