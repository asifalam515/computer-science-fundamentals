#include<bits/stdc++.h>
using namespace std;
class CustomSort
{
    public:
    char c;
    int count;
};
bool cmp(CustomSort a,CustomSort b)
{
    if(a.count>b.count)return true;
    else return false;
}
int main()
{
  int n;
  cin>>n;
  CustomSort frq[26];
  for(int i=0;i<26;i++)
  {
    frq[i].c=(i+'a');
    frq[i].count=0;
  }
  for(int i=0;i<n;i++)
  {
    char c;
    cin>>c;
    frq[c-'a'].count++;
  }
sort(frq,frq+26,cmp);

for(int i=0;i<26;i++)
{
    if(frq[i].count>0)
    {
        cout<<frq[i].c<<" "<< frq[i].count<<endl;
    }
}
    return 0;
}