#include <bits/stdc++.h>
using namespace std;

void increasing_number(int count, int n)
{
    if (count <= n)
    {
        cout << count << " ";
        increasing_number(count + 1, n);
    }
}

void repeating_names(int count, int n)
{
    if (count <= n)
    {
        cout << "het Shah"
             << " ";
        repeating_names(count + 1, n);
    }
}

void reverse_number(int count, int n)
{
    if (count >= 1)
    {
        cout << count << " ";
        reverse_number(count - 1, n);
    }
}

void sum_of_number(int count, int sum)
{
    if (count < 1)
    {
        cout << sum;
        return;
    }
    sum_of_number(count - 1, sum = sum + count);
}

int factorial_of_n(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * factorial_of_n(n - 1);
}
int main()
{
    // increasing_number(1, 5);
    // repeating_names(1, 3);
    // reverse_number(6, 6);
    // sum_of_number(5, 0);
    cout << factorial_of_n(5);
}