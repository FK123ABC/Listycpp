#include <iostream>

using namespace std;

void iota(int tab[], unsigned size)
{
    for (unsigned i = 0; i < size; i++)
    {
        tab[i] = i;
    }
}

int main()
{
    unsigned size = 10;
    int tab[size];
    iota(tab, size);
    for (unsigned i = 0; i < size; i++)
    {
        cout << tab[i] << " ";
    }
    return 0;
}
