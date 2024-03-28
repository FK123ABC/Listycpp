#include <iostream>
#include <cstdlib>

using namespace std;

int compare(const void* a, const void* b)
{
    int num1 = *(const int*)a;
    int num2 = *(const int*)b;
    if (num1 % 2 == 0 && num2 % 2 == 0)
    {
        return num1 - num2;
    }
    else if (num1 % 2 != 0 && num2 % 2 != 0)
    {
        return num2 - num1;
    }
    else
    {
        if (num1 % 2 == 0)
        {
            return -1;
        }
        else
        {
            return 1;
        }
    }
}

int main() {
    int values[] = {40, 12, 18, 10, 11, 100, 90, 20, 25, 1, 9, 65, 99, 15};
    int n = sizeof(values) / sizeof(values[0]);

    qsort(values, n, sizeof(int), compare);
    for (int i = 0; i < n; i++) {
        cout << values[i] << " ";
    }
    return 0;
}
