#include <iostream>
using namespace std;

int main()
{
    int s,size,sum=0;
    cout<<"Enter size of array"<<endl;
    cin>>size;
    int array[size]={};

    cout<<"Enter numbers into array"<<endl;
    for (int i=0;i<size;i++)
    {
        cin>>s;
        array[i]=s;
        sum=sum+s;
    }
    cout<<endl;

    cout<<"Sum of elements in array is: "<<sum<<endl;
    cout<<"The numbers in the array are: ";
    for (int i=0;i<size-1;i++)
    {
        cout<<array[i]<<" , ";
    }
    cout<<array[size-1]<<endl;
    cout<<endl;
    
    for (int i=0;i<size;i++)
    {
        cout<<array[i]*array[i]<<" ";
    }
    cout<<endl;

    int bin=0;
    for (int i=0;i<size;i++)
    {
        int a=array[i]*array[i];
        bin=bin+a;        
    }
    cout<<bin;

    return 0;
}