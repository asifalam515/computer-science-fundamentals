#include<bits/stdc++.h>
using namespace std;
class Car{
    public:
    int price;
    int mileage;
    int year;
};
int main()
{
    // declared/create a object(honda_cbr) from the class(Car)
  Car honda_cbr;
  honda_cbr.price=3500009;
  honda_cbr.mileage=35;
  honda_cbr.year=2018;
  cout<<honda_cbr.mileage<<" ";


    return 0;
}
