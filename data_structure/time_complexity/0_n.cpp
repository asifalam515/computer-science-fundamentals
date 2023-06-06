#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    int a[n];//o(N)
    for(int i=0;i<n;i++) {
        cin>>a[i]; //o(N)
    }
    for(int i=0;i<n-1;i++) {//o(n*n)
        for(int j=i+1;j<n;j++) {
            if(a[i]>a[j]) swap(a[i],a[j]);//
        }
    }
    for(int i=0;i<n;i++) {
        cout<<a[i]<<" ";
    }
    return 0;
}
