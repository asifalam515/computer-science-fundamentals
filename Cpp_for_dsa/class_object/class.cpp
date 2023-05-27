#include<bits/stdc++.h>
using namespace std;
class Student
  {
    public:
    char name[100];
    int id;
    int position;
    char department;
    
  };
int main()
{
  Student asif;
  char nam[100]="asibul alam";
strcpy(asif.name,nam);
  asif.id=34;
  asif.position=24;
  asif.department='s';

Student karim;
char nam_2[100]="karim khan";
strcpy(karim.name,nam_2);
karim.id=22;
karim.position=13;
karim.department='m';
cout<<karim.name<<endl;

    return 0;
}