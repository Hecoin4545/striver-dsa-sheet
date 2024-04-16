#include <bits/stdc++.h>
using namespace std;

// recursion is basically when a function calls itself until a spefic condition (i.e base condition) is met
// and if their is a INFINITY recursion going on than at some point complier will stop and their will be stack overflow

// void Problem1(int i, int n)
// {
//     if (i >= n)
//     {
//         return;
//     }
//     cout << "het" << endl;
//     Problem1(i + 1, n);
// }

// void Problem2(int i, int n)
// {
//     if (i > n)
//     {
//         return;
//     }

//     cout << i << endl;
//     Problem2(i + 1, n);
// }

void Problem3(int i, int n)
{
    if (i < 1)
    {
        return;
    }
    Problem3(i - 1, n);

    // this conccept is known as backtracking isme basically ho kya raha hai ki upar wala function recursion mai chal rahah hai so starting mai jase iski value 5 hai toh vo like 31 wale function mai jake i ki value 4 ho jayegi and wahi function age vapsas call hota rahega jab tak ek particular condition met nhi hoti and jab tak ek particular condition met nhi hoti tab tak iske niche wala jitna bhi code hoga it will not execute
    cout << i << endl;
}

void Problem4(int i)
{
    if (i > 5)
    {
        return;
    }
    Problem4(i + 1);
    cout << i << endl;
}

// sum of first n number in three different ways

// 1 parametersied way

void Problem5(int i, int sum)
{
    if (i > 5)
    {
        cout << sum << endl;
        return;
    }
    Problem5(i + 1, sum + i);
}

// 2 functional resursion
// if we want to return something from the function rather than just printing it than we can use fuctional recursion
// Problem6(int n)
// {
//     if (n == 0)
//     {
//         return 0;
//     }
//     else
//     {
//         cout << n;
//         return n + Problem6(n - 1);
//     }
// }

// void Problem7(int i)
// {
//     int arr[5] = {1, 2, 5, 3, 4};
//     if (i >= 3)
//     {
//         return;
//     }
//     swap(arr[i], arr[5 - i - 1]);
//     for (i = 0; i < 5; i++)
//     {
//         cout << arr[i];
//     }
//     Problem7(i + 1);
// }

// void Pattern8(int i, int n)
// {
//     if (i >= n)
//     {
//         return;
//     }
//     Pattern8(i + 1, n);
//     cout << "het" << endl;
// }

// void Pattern9(int i, int n)
// {
//     if (i > n)
//     {
//         return;
//     }
//     Pattern9(i + 1, n);
//     cout << i << endl;
// }

// void Pattern10(int i, int n)
// {
//     if (i > n)
//     {
//         return;
//     }

//     return Pattern10(i + 1);
// }

void Pattern11(int i, int arr[], int n)
{
    if (i >= n / 2)
        return;
    swap(arr[i], arr[n - i - 1]);
    Pattern11(i + 1, arr, n);
}

int main()
{
    // Problem1(0, 5);
    // Problem2(1, 5);
    // Problem3(5, 5);
    // Problem4(1);
    // Problem5(1, 0);
    // Problem6(5);
    // Problem7(0);
    // Pattern8(0, 5);
    // Pattern9(1, 5);
    // Pattern10(1, 5);
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    Pattern11(0, arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
