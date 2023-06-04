#include<bits/stdc++.h>
using namespace std;
int main()
{
  int x;
  cin>>x;
  //ইন্টিজার ইনপুট নেবার পরেই cin.ignore() দিবো।এটি enter ইনপুট নেয়াকে কে স্কিপ করে দিবে 
  //getchar() নিলেও সেইম কাজটাই করবে
  cin.ignore();
  string s;
  getline(cin,s);
  cout<<x<<endl;
  cout<<s<<endl;


    return 0;
}