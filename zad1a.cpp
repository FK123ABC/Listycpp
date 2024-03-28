#include <iostream>

using namespace std;

int suma(const int tab[], unsigned size)
{
    int sum = 0;
    for (unsigned i = 0; i < size; ++i) {
        sum += tab[i];
    }
    return sum;
}

int main()
{
    int tab[] = {1, 2, 3, 4, 5, 1 };
    unsigned size = 6;
    int result = suma(tab, size);
    cout << "Suma: " << result << endl;
    return 0;
}
