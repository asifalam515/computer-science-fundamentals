#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
        char name[100];
        int identity;
        int position;
        char department;

        Student(int id,int d,int c,char* n)
        {
            identity=id;
            department=d;
            position=c;
            strcpy(name,n);
        }
};
Student fun()
{
    char name[100]="Muck ZuckerBurg";
    Student a(293214,'M',7,name);
    return a;
}
int main()
{
    Student mark=fun();

    cout<<mark.name<<endl;
    
    return 0;
}