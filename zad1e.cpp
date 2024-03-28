#include <iostream>

using namespace std;

void reverse(int* tab, size_t size)
{
    for (size_t i = 0; i < size / 2; ++i)
    {
        int temp = tab[i];
        tab[i] = tab[size - 1 - i];
        tab[size - 1 - i] = temp;
    }
}

int main()
{
    int tab[] = {1, 2, 3, 4, 5};
    size_t size = 5;
    reverse(tab, size);
    for (size_t i = 0; i < size; ++i)
    {
        cout << tab[i] << " ";
    }
    return 0;
}
