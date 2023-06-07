#include<bits/stdc++.h>
using namespace std;
int main()
{
 
// vector<int>v; type 1;
// vector<int>v(5,); type 2;
// vector<int>v(5,10);type 3;
/*
type 4
vector<int>v2(5,100);
vector<int>v(v2);
v2 হতে মান কপি করে নিবে
*/ 

/*
type 5:
 int arr[5]={23,23,6,2,6};
 vector<int>v(arr,arr+5);
 এরে হতে মান কপি হয়ে যাবে
 */

// type 6:
vector<int>v={23,56,7,2};
for(int i=0;i<v.size();i++)
{
    cout<<v[i]<<" "<<endl;
    cout<<v.size()<<endl;
}  

    return 0;
}