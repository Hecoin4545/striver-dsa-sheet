#include <bits/stdc++.h>
using namespace std;

// void Pattern1(int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < 4; j++)
//         {
//             cout << "*"
//                  << " ";
//         }
//         cout << endl;
//     }
// }

// void Pattern2(int n)
// {
//     for (int i = 0; i <= n; i++)
//     {
//         for (int j = 0; j < i; j++)
//         {
//             cout << "*"
//                  << " ";
//         }
//         cout << endl;
//     }
// }

// void Pattern3(int n)
// {
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << j << " ";
//         }
//         cout << endl;
//     }
// }

// void Pattern4(int n)
// {
//     for (int i = 0; i <= n; i++)
//     {
//         for (int j = 0; j < i; j++)
//         {
//             cout << i << " ";
//         }
//         cout << endl;
//     }
// }

// void Pattern5(int n)
// {
//     for (int i = n; i > 0; i--)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }
// }

// void Pattern6(int n)
// {
//     for (int i = n; i > 0; i--)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << j;
//         }
//         cout << endl;
//     }
// }

// void Pattern7()
// {
//     for (int i = 0; i < 5; i++)
//     {
//         for (int j = 0; j <= (4 - i); j++)
//         {
//             cout << " ";
//         }

//         for (int k = 0; k < ((2 * i) + 1); k++)
//         {
//             cout << "*";
//         }

//         for (int j = 0; j <= (4 - i); j++)
//         {
//             cout << " ";
//         }
//         cout << endl;
//     }

//     for (int i = 0; i < 5; i++)
//     {
//         for (int j = 0; j <= i; j++)
//         {
//             cout << " ";
//         }
//         for (int k = 0; k < (((2 * 5) - 1) - (2 * i)); k++)
//         {
//             cout << "*";
//         }
//         for (int j = 0; j <= i; j++)
//         {
//             cout << " ";
//         }
//         cout << endl;
//     }
// }

// void Pattern8()
// {
//     for (int i = 0; i < 5; i++)
//     {
//         for (int j = 0; j <= i; j++)
//         {
//             cout << " ";
//         }
//         for (int k = 0; k < (((2 * 5) - 1) - (2 * i)); k++)
//         {
//             cout << "*";
//         }
//         for (int j = 0; j <= i; j++)
//         {
//             cout << " ";
//         }
//         cout << endl;
//     }
// }

// void Pattern10()
// {
//     for (int i = 0; i < 9; i++)
//     {
//         int stars = i;
//         if (i > 4)
//         {
//             stars = 9 - i;
//         }
//         for (int j = 0; j < stars; j++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }
// }

// void Pattern11()
// {
//     for (int i = 0; i < 5; i++)
//     {
//         int count = 0;
//         for (int j = 0; j < i; j++)
//         {
//             if (count % 2 == 0)
//             {
//                 cout << "1";
//                 count = count + 1;
//             }
//             else
//             {
//                 cout << "0";
//                 count = count + 1;
//             }
//         }
//         cout << endl;
//     }
// }

// void Pattern12()
// {
//     for (int i = 0; i < 4; i++)
//     {
//         for (int j = 0; j <= i; j++)
//         {
//             cout << j + 1;
//         }
//         for (int k = 0; k < (6 - (2 * i)); k++)
//         {
//             cout << " ";
//         }
//         for (int j = (i + 1); j >= 1; j--)
//         {
//             cout << j;
//         }
//         cout << endl;
//     }
// }

void Pattern13()
{
    for (int i = 1; i <= 5; i++)
    {
        int count = i;
        for (int j = 0; j < i; j++)
        {
            cout << count;
            count = count + 1;
        }
        cout << endl;
    }
}

void Pattern14()
{
    for (int i = 0; i < 5; i++)
    {
        char count = 97;
        for (int j = 0; j <= i; j++)
        {
            cout << count;
            count = count + 1;
        }
        cout << endl;
    }
}

void Pattern15()
{
    for (int i = 5; i > 0; i--)
    {
        char count = 97;
        for (int j = 0; j < i; j++)
        {
            cout << count;
            count = count + 1;
        }
        cout << endl;
    }
}

void Pattern16()
{
    for (int i = 0; i < 5; i++)
    {
        char count = i + 97;
        for (int j = 0; j <= i; j++)
        {
            cout << count;
        }
        cout << endl;
    }
}

void Pattern17()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << " ";
        }
        char count = 97;
        for (int k = 0; k < ((2 * i) + 1); k++)
        {
            int value = ((2 * i) + 2) / 5;
            if (k <= value)
            {
                cout << count;
                count = count + 1;
            }
            else
            {
                cout << count;
                count = count - 1;
            }
        }
        for (int j = 0; j <= i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

int main()
{
    // int n;
    // cin >> n;
    // Pattern1(n);
    // Pattern2(n);
    // Pattern3(n);
    // Pattern4(n);
    // Pattern5(n);
    // Pattern6(n);
    // Pattern7();
    // Pattern8();
    // Pattern10();
    // Pattern11();
    // Pattern12();
    // Pattern13();
    // Pattern14();
    // Pattern15();
    // Pattern16();
    // Pattern17();
}