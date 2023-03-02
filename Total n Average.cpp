#include <iostream>
using namespace std;

int main()
{
    int size,a,b;
    float c,sum=0;
    cout<<"Enter number of students: ";
    cin>>size;
    int clas[size];
    cout<<"Enter numbers: ";
    for (int i=0; i<size; i++)
    {
        cin>>a;
        clas[i]=a;
    }
    cout<<endl;
    for (int i=0; i<size; i++)
    {
        b=clas[i];
        sum=sum+b;
        
    }
    cout<<endl;
    cout<<sum;
    c=sum/size;
    cout<<endl;

    cout<<c;

    return 0;

}