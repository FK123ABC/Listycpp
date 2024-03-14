#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;

double a()
{
    double w=0;
    for (int j=1; j<=1'000'000; j++)
    {
        w = w + pow(-1, j + 1.0)/(2*j-1);
    }
    w=w*4;
    cout<<"Pi wynois: "<<M_PI<<endl;
    cout<<"Wynik polecenia a wynosi: "<<w<<endl;
    cout<<"Różnica pomiędzy wynikiem 1 działania a pi wynosi: "<<M_PI-w<<endl;
    return 0;
}

double b()
{
    long double w=1;
    for (int j=1; j<=1'000'000; j++)
    {
        w=w*((4.0*j*j)/(4.0*j*j-1.0));
    }
    w=w*2;

    cout<<"Wynik polecenia b wynosi: "<<w<<endl;
    cout<<"Różnica pomiędzy wynikiem 2 działania a pi wynosi: "<<M_PI-w<<endl;
    return 0;
}

double c()
{
    long double w=0;
    for (int j=1; j<=1'000'000;j++)
    {
        w+=1/(pow(2.0*j-1.0, 2.0));
    }
    w=w*8;
    w=sqrt(w);
    cout<<"Wynik polecenia c wynosi: "<<w<<endl;
    cout<<"Różnica pomiędzy wynikiem 3 działąnia a pi wynosi: "<<M_PI-w<<endl;
    return 0;
}

int main()
{
    a();
    b();
    c();
}
