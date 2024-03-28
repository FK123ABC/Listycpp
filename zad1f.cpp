#include <iostream>

using namespace std;

int dot_product(const int* tab1, const int* tab2, size_t size)
{
    int result = 0;
    for (size_t i = 0; i < size; ++i)
    {
        result += tab1[i] * tab2[i];
    }
    return result;
}

int main()
{
    int tab1[] = {1, 2, 3, 4, 5};
    int tab2[] = {2, 3, 4, 5, 6};
    size_t size = 5;
    int result = dot_product(tab1, tab2, size);
    cout << "Iloczyn skalarny: " << result << endl;
    return 0;
}
