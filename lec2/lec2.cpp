#include <bits/stdc++.h>
using namespace std;

void Pattern1()
{
    int row, column;
    column = 1;
    for (row = 1; row <= 5;)
    {
        if (column <= 5)
        {
            cout << "*";
            column += 1;
        }
        else
        {
            cout << endl;
            column = 1;
            row += 1;
        }
    }
}

void Pattern2()
{
    int row, column;
    for (row = 0; row <= 4; row++)
    {
        for (column = 0; column <= row; column++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

// void Pattern3()
// {
//     int row, column;
//     for (row = 1; row <= n; row++)
//     {
//         for (column = 1; column <= row; column++)
//         {
//             cout << column << " ";
//         }
//         cout << endl;
//     }
// }

void Pattern4()
{
    int row, column, number_print;
    number_print = 1;
    for (row = 1; row <= 5; row++)
    {
        for (column = 1; column <= row; column++)
        {
            cout << number_print << " ";
        }
        number_print += 1;
        cout << endl;
    }
}

void Pattern5()
{
    int row, column;
    for (row = 5; row >= 1; row--)
    {
        for (column = 1; column <= row; column++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void Pattern6()
{
    int row, column;
    for (row = 5; row >= 1; row--)
    {
        for (column = 1; column <= row; column++)
        {
            cout << column << " ";
        }
        cout << endl;
    }
}

void Pattern7()
{
    int row, column;
    for (row = 0; row < 5; row++)
    {
        // space
        for (column = 0; column < 5 - row - 1; column++)
        {
            cout << " ";
        }
        // stars
        for (column = 0; column < 2 * row + 1; column++)
        {
            cout << "*";
        }
        // space
        for (column = 0; column < 5 - row - 1; column++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void Pattern8()
{
    int row, column;
    for (row = 1; row <= 5; row++)
    {
        // space
        for (column = 1; column <= row - 1; column++)
        {
            cout << " ";
        }
        // stars
        for (column = 1; column <= 9 - (row - 1) * 2; column++)
        {
            cout << "*";
        }
        // space
        for (column = 1; column <= row - 1; column++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void Pattern9()
{
    int row, column;
    for (row = 0; row < 5; row++)
    {
        // space
        for (column = 0; column < 5 - row - 1; column++)
        {
            cout << " ";
        }
        // stars
        for (column = 0; column < 2 * row + 1; column++)
        {
            cout << "*";
        }
        // space
        for (column = 0; column < 5 - row - 1; column++)
        {
            cout << " ";
        }
        cout << endl;
    }

    for (row = 1; row <= 5; row++)
    {
        // space
        for (column = 1; column <= row - 1; column++)
        {
            cout << " ";
        }
        // stars
        for (column = 1; column <= 9 - (row - 1) * 2; column++)
        {
            cout << "*";
        }
        // space
        for (column = 1; column <= row - 1; column++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void Pattern10()
{
    int row, column;
    for (row = 0; row <= 4; row++)
    {
        for (column = 0; column <= row; column++)
        {
            cout << "*";
        }
        cout << endl;
    }

    for (row = 4; row >= 1; row--)
    {
        for (column = 1; column <= row; column++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void Pattern11()
{
    int row, column, count;
    count = 0;
    for (row = 1; row <= 5; row++)
    {
        for (column = 1; column <= row; column++)
        {
            if (count % 2 == 0)
            {
                cout << 1 << " ";
                count += 1;
            }
            else
            {
                cout << 0 << " ";
                count += 1;
            }
        }
        cout << endl;
    }
}

int main()
{
    // Pattern1();
    // Pattern2();
    // Pattern3();
    // Pattern4();
    // Pattern5();
    // Pattern6();
    // Pattern7();
    // Pattern8();
    // Pattern9();
    // Pattern10();
    Pattern11();
}