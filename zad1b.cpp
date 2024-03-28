#include <iostream>

using namespace std;

void suma(const int tab[], unsigned size, int* result)
{
    *result = 0;
    for (unsigned i = 0; i < size; ++i) {
        *result += tab[i];
    }
}

int main()
{
    int tab[] = {1, 2, 3, 4, 4};
    unsigned size = 5;
    int result;
    suma(tab, size, &result);
    cout << "Suma: " << result << endl;
    return 0;
}
