#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    char name[100];
    int age;
    int position;
    int id;

// constructor:
Student (char *n,int a,int c,int r)
{
strcpy(name,n);
age=a;
position=c;
id=r;
}
};

int main()
{
  char n[100]="asibul alam";
  Student * rahim=new Student(n,23,2,63);
  (*rahim).id=55;

    return 0;
}