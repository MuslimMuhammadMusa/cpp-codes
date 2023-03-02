#include <iostream>
using namespace std;
int main(){

    float* ptr;
    float arr[5]; 
    ptr = &arr[0];
    
    cout<<ptr<<endl;
    cout<<&arr[2]<<endl;

    cout<<ptr<<endl;
    cout<<ptr+1<<endl;
    cout<<ptr+2<<endl;
    cout<<ptr+3<<endl;
}