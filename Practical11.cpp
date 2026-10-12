#include<iostream>
using namespace std;

template<typename T>
class Calculator
{
    T num1, num2;

    public:

    Calculator(T n1, T n2)
    {
        num1 = n1;
        num2 = n2;
    }

    void display()
    {
        cout << "\nAdd is \t" << add(num1, num2);
        cout << "\nDiv is \t" << div(num1, num2);
        cout << "\nMul is \t" << mul(num1, num2);
        cout << "\nSub is \t" << sub(num1, num2);
    }

    T add(T m, T n)
    {
        return m + n;
    }

    T div(T m, T n)
    {
        return m / n;
    }

    T mul(T m, T n)
    {
        return m * n;
    }

    T sub(T m, T n)
    {
        return m - n;
    }
};

int main()
{
    Calculator<int> i(6, 4);
    Calculator<float> d(6.2, 4);

    i.display();
    d.display();

    return 0;
} 


