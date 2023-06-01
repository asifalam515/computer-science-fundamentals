#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    string name;
    int marks;
    int age;
};
 bool compare(Student a,Student b)
    {
        if(a.marks>b.marks)return true;
        else return false;
    }
int main()
{
   
  Student arr[3];
//   input object
  for(int i=0;i<3;i++)
  {
    getline(cin,arr[i].name);
    cin>>arr[i].age>>arr[i].marks;
    cin.ignore();

  }
//   sort it 
sort(arr,arr+3,compare);

// output
for(int i=0;i<3;i++)
{
    cout<<arr[i].name<<" "<<arr[i].age<<" "<<arr[i].marks<<endl;
}
    return 0;
}