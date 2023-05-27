#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    char name[100];
    int age;
    int id;
    int position;
    Student(char *n,int a,int r,int c)
    {
        strcpy(name,n);
        age=a;
        id=r;
        position=c;

    }
};

int main()
{
  Student asif("asibul alam",23,2,7);
cout<<asif.name<<endl;

    return 0;
}