#include<iostream>
#include<cmath>

using namespace std;

long double a()
{
    long double t = 1 / sqrt(3.0);
    long double pi;
    for (int i = 0; i <= 30; i++)
    {
        if(i==0)
        {
            pi = 6 * pow(2.0, i) * t;
            cout<<"Dla i równego: "<<i<<" pi wynosi: "<<pi<<endl;
        }
        else
        {
            t = (sqrt(t * t + 1.0) - 1.0) / t;
            pi = 6 * pow(2.0, i) * t;
            cout << "Dla i rownego: " << i << " pi wynosi: " << pi << endl;
        }

    }
    return 0;
}




int main()
{
    a();
    return 0;
}
