#include <iostream>
#include <cmath>
using namespace std;
long long factorial(int x)
{
    if (x == 0)
        return 1;
    return x * factorial(x - 1);
}
long long entekhab(int k, int n)
{
    return factorial(n) / (factorial(k) * factorial(n - k));
}
int BMM(int x, int y)
{
    int a, b;
    if (x == 0)
        return y;
    if (y == 0)
        return x;
    a = (x > y) ? y : x;
    b = (x > y) ? x : y;
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
long long KMM(long long x, long long y)
{
    return abs(x * y) / BMM(x, y);
}

int main()
{
}