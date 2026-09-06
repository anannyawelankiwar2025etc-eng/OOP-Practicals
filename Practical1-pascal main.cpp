#include <iostream>
using namespace std;

int fact(int p) 
{
    int factorial = 1;

    for (int i = 1; i <=p; i++) 
    {
        factorial *= i;
    }

    return factorial;
}
int Binocoef(int n,int r)
{
    int coef;
    coef=fact(n)/(fact(r)*fact(n-r));
    return coef;
}
void printPascal(int n)
{
    for (int line = 0; line < n; line++)
    {
        for (int i = 0; i <= line; i++)
        {
            cout << Binocoef(line, i) << " ";
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cout << "Enter number of rows  ";
    cin >> n;
    printPascal(n);
    return 0;
}
