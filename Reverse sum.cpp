#include <iostream>
using namespace std;

 int summation(int num){
 //Code Here
  int sum=0;
  for( num ; num>=0 ; num-- ){
  sum=sum+num;  
  }
  cout<< sum;
 }

int main()
{
int a=4;   
summation(a);
}