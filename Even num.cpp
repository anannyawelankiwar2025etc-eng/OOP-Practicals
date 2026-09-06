#include <iostream>
using namespace std;

int main()
{
    int n,sumo = 0,sume=0;
    cout<<"Enter the number upto which the addition needs to be done";
    cin>>n;
     
    for (int i = 1; i <= n; i++)
    {
        if(i%2==0)
        {
            sume=sume+i;
        }
        else
        {
            sumo=sumo+i;
        }
    }
    cout<<"Sum of First Even Numbers upto "<<n<<" is\n"<<sume;
    cout<<"\nSum of First Odd Numbers upto "<<n<<" is\n"<<sumo;
  
    return 0;
}
