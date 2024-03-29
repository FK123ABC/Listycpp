#include<iostream>

using namespace std;

double downN1()
{
    double a = 0;
    for (int i = 1; i <= 100; i++)
    {
        a += 1.0 / i;
    }
    cout << "Suma down(N) dla N=100 jest rowna: " << a << endl;

    return a;
}

double downN2()
{
    double b = 0;
    for (int i = 1; i <= 100000; i++)
    {
        b += 1.0 / i;
    }
    cout << "Suma down(N) dla N=100000 jest rowna: " << b << endl;

    return b;
}

double downN3()
{
    double c = 0;
    for (int i = 1; i <= 100000000; i++)
    {
        c += 1.0 / i;
    }
    cout << "Suma down(N) dla N=100000000 jest rowna: " << c << endl;

    return c;
}

double upN1()
{
    double d = 0;
    for (int i = 100; i > 0; i--)
    {
        d += 1.0 / i;
    }
    cout << "Suma up(N) dla N=100 jest rowna: " << d << endl;
    return d;
}

double upN2()
{
    double f = 0;
    for (int i = 100000; i > 0; i--)
    {
        f += 1.0 / i;
    }
    cout << "Suma up(N) dla N=100000 jest rowna: " << f << endl;
    return f;
}

double upN3()
{
    double g = 0;
    for (int i = 100000000; i > 0; i--)
    {
        g += 1.0 / i;
    }
    cout << "Suma up(N) dla N=100000000 jest rowna: " << g << endl;
    return g;
}

int main()
{
    downN1();
    downN2();
    downN3();
    upN1();
    upN2();
    upN3();
    return 0;
}
