#include<iostream>

using namespace std;

float downN1()
{
    float a = 0;
    for (int i = 1; i <= 100; i++)
    {
        a += 1.0 / i;
    }
    cout << "Suma down(N) dla N=100 jest rowna: " << a << endl;

    return a;
}

float downN2()
{
    float b = 0;
    for (int i = 1; i <= 100000; i++)
    {
        b += 1.0 / i;
    }
    cout << "Suma down(N) dla N=100000 jest rowna: " << b << endl;

    return b;
}

float downN3()
{
    float c = 0;
    for (int i = 1; i <= 100000000; i++)
    {
        c += 1.0 / i;
    }
    cout << "Suma down(N) dla N=100000000 jest rowna: " << c << endl;

    return c;
}

float upN1()
{
    float d = 0;
    for (int i = 100; i > 0; i--)
    {
        d += 1.0 / i;
    }
    cout << "Suma up(N) dla N=100 jest rowna: " << d << endl;
    return d;
}

float upN2()
{
    float f = 0;
    for (int i = 100000; i > 0; i--)
    {
        f += 1.0 / i;
    }
    cout << "Suma up(N) dla N=100000 jest rowna: " << f << endl;
    return f;
}

float upN3()
{
    float g = 0;
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
