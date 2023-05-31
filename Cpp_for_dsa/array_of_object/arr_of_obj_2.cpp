#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    string name;
    int age;
    int cls;
    // Student(int age,int cls,string name)
    // {
    //     this->age=age;
    //     this->name=name;
    //     this->cls=cls;
    // }


};
int main()
{
  
// data type name of the array [size of the array]
Student arr[3];
for(int i=0;i<3;i++)
{
    getline(cin,arr[i].name);
    cin>>arr[i].age>>arr[i].cls;
    cin.ignore();

}
for(int i=0;i<3;i++)
{
    cout<<arr[i].name<<" "<<arr[i].age<<" "<<arr[i].cls<<endl;
}

    return 0;
}