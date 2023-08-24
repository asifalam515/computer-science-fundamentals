#include<bits/stdc++.h>
using namespace std;
int binary_search(vector<int>&v,int target)
{
    int start=0;
int end=v.size()-1;

while (end>=start)
{
    int mid=(start+end)/2;
    if(v[mid] == target)
    {
        return mid;
    }
    else if(v[mid] <target)
    {
        start=mid+1;
    }
    else
    {
        end=mid-1;
    }
}
return -1;
}


int main()
{
 vector<int>v;
 int n;
 cin>>n;
 for(int i=0;i<n;i++)
 {
    int x;
    cin>>x;
    v.push_back(x);
 }
int target;
cin>>target;
int ans=binary_search(v,target);
if(ans==-1)
{
    cout<<"Not Found"<<endl;
}
else
{
cout<<ans<<endl;
}


    return 0;
}