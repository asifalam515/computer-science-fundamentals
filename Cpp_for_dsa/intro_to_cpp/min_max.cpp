#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int maximum=max(a,b);
    int minimum=min(a,b);
    cout<<"min is "<<minimum<<endl;
    cout<<"maximum is "<<maximum<<endl;
    return 0;
}