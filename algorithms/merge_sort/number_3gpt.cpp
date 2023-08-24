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
        // occurance++;
        if(v[mid+1]==target)
        {
            return true;
        }
        else if(v[mid-1]==target)
        {
            return true;
        }
        else {
            return false;
        }
        
    }
    else if(v[mid] <target)
    {
        start=mid+1;
    }
    else
    {
        end=mid-1;
    }
    // if(occurance==0)return 0;
}
return false;
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
bool ans=binary_search(v,target);
if(true)
{
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}

    return 0;
}