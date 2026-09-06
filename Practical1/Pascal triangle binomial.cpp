#include <iostream>
using namespace std;


int Binocoef(int n, int k)
{
    int res = 1;


    if (k > n - k)
        k = n - k;


    for (int i = 0; i < k; i++)
    {
        res = res * (n - i);
        res = res / (i + 1);
    }


    return res;
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
    cout << "Enter number of rows: ";
    cin >> n;


    printPascal(n);


    return 0;
}
