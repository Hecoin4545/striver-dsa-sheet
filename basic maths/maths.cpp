#include <bits/stdc++.h>
using namespace std;

void Problem1()
{
    int a = 11122345;
    int count = 0;
    while (a != 0)
    {
        a = a / 10;
        count = count + 1;
    }
    cout << count;
}

void Problem2()
{
    int a = 123;
    int b;
    while (a != 0)
    {
        b = a % 10;
        a = a / 10;
    }
    cout << b;
}

int main()
{
    // Problem1();
    Problem2();
}