#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter two integers \n";
    cin>>a>>b;
    try
    {
        if(b==0)
        {
            throw b;
        }
        c=a/b;
        cout<<"\n Division is"<<c;
    }
    catch(int x)
    {
        cout<<"Arithmatic Error \n";
        cout<<"Divide by "<<x;
    }
    cout<<" After division operation";
    return 0;
}
