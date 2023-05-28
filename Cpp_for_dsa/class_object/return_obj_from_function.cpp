#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    char name[100];
    int age;
    int roll;
    char section;
    Student(char *n,int a,int r,char s)
    {
        strcpy(name,n);
        age=a;
        roll=r;
        section=s;
    }
};

Student fun()
{
    Student asif("asibul alam",18,24323,'A');
    return asif;
}
int main()
{
  Student a=fun();
  cout<<a.age<<endl;

    return 0;
}