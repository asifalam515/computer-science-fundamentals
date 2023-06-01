#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    string name;
    int marks;

};
int main()
{
  
  Student arr[3];
  for(int i=0;i<3;i++)
{
getline(cin,arr[i].name);
cin>>arr[i].marks;
cin.ignore();


}
// sort by selection sort
for(int i=0;i<2;i++)
{
    for(int j=i+1;j<3;j++)
    {
        if(arr[j].marks<arr[i].marks)
        {
            swap(arr[i],arr[j]);
        }
    }
}

// output
for(int i=0;i<3;i++)
{
    cout<<arr[i].name<<" "<<arr[i].marks<<endl;
}


    return 0;
}