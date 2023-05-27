#include<bits/stdc++.h>
using namespace std;

class Person{
    public:
    char name[100];
    float height;
    int age;
    Person(char *n,float h,int a)
    {
        strcpy(name,n);
        height=h;
        age=a;

    }

};

int main()
{
  
Person karim("karim",5.6,23);
Person rahim("rahim",5.9,25);
    (karim.age >= rahim.age) ? cout << karim.name : cout << rahim.name;


    return 0;
}