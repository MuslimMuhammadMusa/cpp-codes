#include <iostream>
using namespace std;

int main()
{
    int x=0;
cout<<"enter year ";
cin>>x;

if (x%4==0)
{
   if (x%100==0)
   {
    cout<<"Year is leap.";
   }
}
else{
    cout<<"Year in not leap.";
}
return 0;
}