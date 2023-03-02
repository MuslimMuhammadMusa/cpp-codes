#include <iostream>
using namespace std;

int main()
{
    int a[3];
    int b[3];
    int aoid=1,boid=1,aa=1,bb=1; 

    cout<<"Enter dimensions of first cuboid: ";
    for(int i=0;i<3;i++)
    {
        int x;
        cin>>x;
        a[i]=x;
    }

    cout<<"Enter dimensions of second cuboid: ";
    for(int i=0;i<3;i++)
    {
        int y;
        cin>>y;
        b[i]=y;
    }

    for(int i=0;i<3;i++)
    {
        aa=a[i];
        aoid=aoid*aa;
    }
    cout<<"Dimension of a cuboid is: ";
    cout<<aoid<<endl;

    for(int i=0;i<3;i++)
    {
        bb=b[i];
        boid=boid*bb;
    }
    cout<<"Dimension of b cuboid is: ";
    cout<<boid<<endl;

    int z;
    z=aoid-boid;
    if (z>=0){
         z=z;
    }
    else{
        z= -1*z;
    }

    cout<<"Difference of a and b cuboids is: ";
    cout<<z;

    return 0;
}