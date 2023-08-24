#include<bits/stdc++.h>
using namespace std;

void mergeSortedArrays(int arr1[], int arr2[], int size1, int size2, int mergedArr[]) {
    int i = 0; 
    int j = 0; 
    int k = 0; 
    
  
    while (i < size1 && j < size2) {
        if (arr1[i] >= arr2[j]) { 
            mergedArr[k] = arr1[i];
            i++;
        } else {
            mergedArr[k] = arr2[j];
            j++;
        }
        k++;
    }

    while (i < size1) {
        mergedArr[k] = arr1[i];
        i++;
        k++;
    }
    while (j < size2) {
        mergedArr[k] = arr2[j];
        j++;
        k++;
    }
}

int main() {
    int n;
    cin>>n;
    int arr1[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr1[i];
    }
    int size1=n;


    int m;
    cin>>m;
    int arr2[m];
    for(int i=0;i<m;i++)
    {
        cin>>arr2[i];
    }
    int size2=m;

    int mergedSize = size1 + size2;
    int mergedArr[mergedSize];

    mergeSortedArrays(arr1, arr2, size1, size2, mergedArr);
    
    for (int i = 0; i <mergedSize; i++) {
        cout << mergedArr[i] << " ";
    }

    return 0;
}
