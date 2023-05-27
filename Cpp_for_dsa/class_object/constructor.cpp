#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
    int age;
    char name[100];
    int cls;
    int roll;
    Student(int a,char *n,int c,int r)
    {
        roll=r;
        cls=c;
        strcpy(name,n);
    }
};
int main()
{
 

    return 0;
}