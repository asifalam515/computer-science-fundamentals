#include<bits/stdc++.h>
using namespace std;
void mergeSortedArrays(int arr1[],int arr2[],int size1,int size2,int mergedArr[])
{
    int i=0;//index of arr1
    int j=0;//index of arr2
    int k=0;//index of mergedArrays
    // merged the two arrays while both have elements
    while(i<size1 && j<size2)
    {
        if(arr1[i]<=arr2[j])
        {
            mergedArr[k]=arr1[i];
            i++;
        }
        else 
        {
            mergedArr[k]=arr2[j];
            j++;
        }
        k++;
    }
    // if there are remaing elements in arr1 or arr2,
    // copy/add them to the new merged Array
    while (i<size1)
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
    
}

int main()
{
  int arr1[]={1,3,5,7,9};
  int size1=sizeof(arr1)/sizeof(arr1[0]);

  int arr2[]={2,4,6,8,10};
  int size2=sizeof(arr2)/sizeof(arr2[0]);

  int mergedSize=size1+size2;
  int mergedArr[mergedSize];
mergeSortedArrays(arr1,arr2,size1,size2,mergedArr);

    return 0;
}