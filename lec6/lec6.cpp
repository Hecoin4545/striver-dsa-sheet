#include <bits/stdc++.h>
using namespace std;

void count_number(int n)
{
    int lastnumber, count, initial_number;
    count = 0;
    initial_number = n;
    while (n > 0)
    {
        lastnumber = n % 10;
        if (initial_number % lastnumber == 0)
        {
            count = count + 1;
        }
        n = n / 10;
    }
    cout << count;
}

void reverse_number(int n)
{
    int reverse_digit = 0;
    while (n > 0)
    {
        int last_digit = n % 10;
        reverse_digit = (reverse_digit * 10) + last_digit;
        n = n / 10;
    }
    cout << reverse_digit;
}

void check_palindrom(int n)
{

    if (n < 0)
    {
        cout << "false";
    }
    else
    {
        int final = n;
        int reverse_digit = 0;
        while (n > 0)
        {
            int last_digit = n % 10;
            reverse_digit = (reverse_digit * 10) + last_digit;
            n = n / 10;
        }
        if (reverse_digit - final == 0)
        {
            cout << "true";
        }
        else
        {
            cout << "false";
        }
    }
}

void armstrong_number(int n)
{
    int count = log10(n) + 1;
    int final_number = 0;
    int dub = n;
    while (n > 0)
    {
        int last_number = n % 10;
        n = n / 10;
        final_number = final_number + pow(last_number, count);
    }
    if (final_number == dub)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
}

void sum_of_divisors(int n)
{

    int count = 0;
    for (int dup = n; dup >= 1; dup--)
    {
        for (int i = 1; i <= dup; i++)
        {
            if (dup % i == 0)
            {
                count = count + i;
            }
        }
    }
    cout << count << endl;
}

void prime_number(int n)
{
    int count = 0;
    for (int num = 1; num <= n; num++)
    {
        if (n % num == 0)
        {
            count += 1;
        }
        else
        {
            count += 0;
        }
    }

    if (count > 2)
    {
        cout << "False";
    }
    else
    {
        cout << "True";
    }
}

int main()
{
    // count_number(336);
    // reverse_number(1234);
    // check_palindrom(1);
    // armstrong_number(371);
    // sum_of_divisors(5);
    prime_number(6);
}