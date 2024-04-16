#include <bits/stdc++.h>
using namespace std;

// What Is Selection Sort?
// Lets say we have an array and we have to sort it in increasing order what we can do is we can use selection sorting what it does is
// It will get the minimun and will swap with the first position than second it will check the second minimun and will swap it with 2 position and so on

// void selection_sort(int arr[], int n)
// {
//     for (int i = 0; i <= n - 2; i++)
//     {
//         int mini = i;
//         for (int j = i; j <= n - 1; j++)
//         {
//             if (arr[mini] > arr[j])
//             {
//                 mini = j;
//             }
//             int temp = arr[mini];
//             arr[mini] = arr[i];
//             arr[i] = temp;
//         }
//     }
// }

// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     selection_sort(arr, n);
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }

// What is a Bubble Sort ?
// It basically Pushes The Maximun Element To The Last by adajacent swaps Which Means It Just The Opposite Of Selection Sort

// in the worst case or in the average case the time complexity will be bigo of n^2 whereas in the best case it will be bigo of n

// void bubble_sort(int arr[], int n)
// {
//     for (int i = n - 1; i >= 0; i--)
//     {
//         for (int j = 0; j <= i - 1; j++)
//         {
//             if (arr[j] > arr[j + 1])
//             {
//                 int temp = arr[j + 1];
//                 arr[j + 1] = arr[j];
//                 arr[j] = temp;
//             }
//         }
//     }
// }

// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     bubble_sort(arr, n);

//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }

// What is insertion sort
// Takes An Element And Places It In Correct Position

// for the wrost and the average case it will take bigo of n^2 and in the best case it will take bigo of n
void insertion_sort(int arr[], int n)
{
    for (int i = 0; i <= n - 1; i++)
    {
        int j = i;
        while (j > 0 && arr[j - 1] > arr[j])
        {
            int temp = arr[j - 1];
            arr[j - 1] = arr[j];
            arr[j] = temp;
            j--;
        }
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    insertion_sort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}