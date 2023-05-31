#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    string name;
    int age;
    int marks;
};
int main()
{
  Student arr[3];
  for(int i=0;i<3;i++)
  {
    getline(cin,arr[i].name);
    cin>>arr[i].age>>arr[i].marks;
    cin.ignore();
  }
  Student max;
  max.marks=INT_MIN;
  for(int i=0;i<3;i++)
  {
    if(arr[i].marks>=max.marks)
    {
        max=arr[i];
    }
  }
cout<<max.name<<" "<<max.age<<" "<<max.marks<<endl;
    return 0;
}