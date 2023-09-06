#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
int save[N];
int fibo(int n)
{
    for(int i=0;i<=n;i++)
    {
        save[i]=-1;
    }
    // base case
    if(n==0 || n==1)return 1;
    // momoization
    if(save[n] != -1)
    {
        // tarmane alreay save ase .ami just return kore dibo
        return save[n];
    }
    // ekhane to save nai.tai amake ber korte hbe.then save korte hobe.tarpore return kore dibo
    int ans1=fibo(n-1);
    int ans2=fibo(n-2);
    save[n]=ans1+ans2;
    return save[n];
}
int main()
{
  int n;
  cin>>n;
  cout<<fibo(n)<<endl;

    return 0;
}