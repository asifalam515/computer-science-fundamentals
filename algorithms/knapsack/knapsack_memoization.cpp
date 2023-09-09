#include<bits/stdc++.h>
using namespace std;
int dp[1005][1005];
int knapsack(int n,int total_weight,int value_arr[],int weight_arr[])
{
    // base caes:kon value gula change hosse er upore depends kore
    // n,total_weight minimum 0 hote pare
    if(n==0 || total_weight==0)
    {
        return 0;
    }


if(dp[n][total_weight] !=-1 )
{
    return dp[n][total_weight];

}
    //jodi item er weight total weight/bag er weight er theke kom ba soman hoy tahole kora jaabe
if(weight_arr[n-1] <= total_weight)
{
     int op1= knapsack(n-1,total_weight-weight_arr[n-1],value_arr,weight_arr)+value_arr[n-1];
 int op2=knapsack(n-1,total_weight,value_arr,weight_arr);
 return dp[n][total_weight]= max(op1,op2);
}
else
{
//bag ae ar jaiga nai
return dp[n][total_weight]=knapsack(n-1,total_weight,value_arr,weight_arr);
}
}
int main()
{
  int n;
  cin>>n;
  int value_arr[n],weight_arr[n];
  for(int i=0;i<n;i++)
  {
    cin>>value_arr[i];
  }
    for(int i=0;i<n;i++)
  {
    cin>>weight_arr[i];
  }
int total_size;
cin>>total_size;
for(int i=0;i<=1000;i++)
{
    for(int j=0;j<=total_size;j++)
    {
        // surute -1 thakbe
        dp[i][j]=-1;
    }
}
cout<<knapsack(n,total_size,value_arr,weight_arr);
    return 0;
}