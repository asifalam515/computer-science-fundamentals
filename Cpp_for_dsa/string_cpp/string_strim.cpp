#include<bits/stdc++.h>
using namespace std;
int main()
{
  string s;
  getline(cin,s);
  stringstream ss(s);
  //stringstream একটি একটি word বের করবে(basis on space )
  string word;
 


 while (ss>>word) //ss থেকে একটি একটি word ,word এ যাও(যতক্ষণ না পযন্ত শেষ হয়)
 {
    cout<<word<<endl;
 }
//  we can count word by it also
int count=0;
/*while(ss>>word)
{
    count++;
}
cout<<count<<endl;*/
    return 0;
}