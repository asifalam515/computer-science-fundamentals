#include<bits/stdc++.h>
using namespace std;
int main()
{
//   vector<int>v={50,40,45,30,35,42,32,25,20,10};
//   int x;
//   cin>>x;
//   v.push_back(x);
vector<int >v;
int n;
cin>>n;
for(int i=0;i<n;i++)
{
    int x;
    cin>>x;
    v.push_back(x);
    int current_index=v.size()-1;
    while(current_index !=0)
    {
        int parent_index=(current_index-1)/2;
        if(v[current_index] > v[parent_index])
        {
            swap(v[current_index] , v[parent_index]);
        }
        else
        {
            break;
        }
        current_index=parent_index;
    }
}

for(int value:v)
{
    cout<<value<<" "<<endl;
}

    return 0;
}