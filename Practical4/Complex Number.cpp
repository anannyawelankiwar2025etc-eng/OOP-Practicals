#include <iostream>
using namespace std;

class Complex
{
private:
    float real, img;

public:
    void accept(float r, float i)
    {
        real = r;
        img = i;
    }

    Complex add(Complex x)
    {
        Complex sum;
        sum.real = real + x.real;
        sum.img = img + x.img;
        return sum;
    }

    Complex substract(Complex x)
    {
        Complex diff;
        diff.real = real - x.real;
        diff.img = img - x.img;
        return diff;
    }

    Complex multiply(Complex x)
    {
        Complex product;
        product.real = (real * x.real) - (img * x.img);
        product.img = (real * x.img) + (img * x.real);
        return product;
    }
    Complex divide(Complex x)
    {
        Complex quotient;
        float denominator = (x.real * x.real) + (x.img * x.img);
        quotient.real = ((real * x.real) + (img * x.img)) / denominator;
        quotient.img = ((img * x.real) - (real * x.img)) / denominator;

    return quotient;
}

    void display()
    {
        if (img >= 0)
        {
            cout << real << " + " << img << "i" << endl;
        }
        else
        {
            cout << real << " " << img << "i" << endl;
        }
    }
};

int main()
{
    Complex c1, c2, c3;

    c1.accept(2, 5);
    c2.accept(3, 6);

    cout << "First Complex Number: ";
    c1.display();

    cout << "Second Complex Number: ";
    c2.display();

    c3 = c1.add(c2);
    cout << "Sum: ";
    c3.display();

    c3 = c1.substract(c2);
    cout << "Difference: ";
    c3.display();

    c3 = c1.multiply(c2);
    cout << "Product: ";
    c3.display();
    
    c3 = c1.divide(c2);
    cout << "Quotient ";
    c3.display();

    return 0;
}
