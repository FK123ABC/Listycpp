#include <iostream>

using namespace std;

void pisz(const int* tab, size_t size, std::ostream * out)
{
    for (size_t i = 0; i < size; ++i) {
        *out << tab[i] << " ";
    }
    *out << endl;
}

int main()
{
    int tab[] = {1, 4, 3, 4, 5};
    size_t size = 4;
    pisz(tab, size, &cout);
    return 0;
}
