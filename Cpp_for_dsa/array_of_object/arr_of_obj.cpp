#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    string name;
    int age;
    int marks;
    // Student(string name,int age,int marks)
    // {
    //     this->age=age;
    //     this->marks=marks;
    //     this->name=name;
    // }
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
  for(int i=0;i<3;i++)
  {
    cout<<arr[i].name<<" "<<arr[i].age<<" "<<arr[i].marks<<endl;
  }

    return 0;
}