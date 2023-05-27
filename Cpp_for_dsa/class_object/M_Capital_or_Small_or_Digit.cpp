#include<bits/stdc++.h>
using namespace std;
int main()
{
 char a;
cin>>a;
int asci_value=(int)a;
if(a>=65 && a<=90)
{
    cout<<"ALPHA"<<endl;
    cout<<"IS CAPITAL"<<endl;
}
else if(a>=97 && a<=122)
{
    cout<<"ALPHA"<<endl;
    cout<<"IS SMALL"<<endl;
}
else{
    cout<<"IS DIGIT"<<endl;
}
    return 0;
}