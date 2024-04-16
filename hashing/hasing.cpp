#include <bits/stdc++.h>
using namespace std;

// What is hashing
// it basically means pre storing and fetching
// like you are visiting a site for more than 10 times in a day so than what google does is it will pre store the script of that website and the next time you come will load that script so that it will load faster and will also help google to store less memory

// if we want to declare hash storage inside main than we can decalre it only till 10^6 for integer we cannot declare more than 10^6 than it will give error
// but if we declare the hash value outside main function than we can go till the value 10^7 for integer

// for boolean if the hash value is to be stored inside main than it will go till 10^7
// and for boolean outside int funcition we can go up to 10^8

// their are total of 256 character in total

// hash['a']++ in this problem we know that hash ke under sirf vo integer le sakta hai so 'a' will get converted into 97 and hash mai 97 postion par uski value ++ ho jayegi
// int main()
// {
// int n;
// cin >> n;
// int arr[n];
// for (int i = 0; i < n; i++)
// {
//     cin >> arr[i];
// }

// int hash[13] = {0};
// for (int i = 0; i < n; i++)
// {
//     hash[arr[i]] += 1;
// }

// int q;
// cin >> q;
// while (q--)
// {
//     int numbers;
//     cin >> numbers;
//     cout << hash[numbers] << endl;
// }

// string s;
// cin >> s;

// int hash[26] = {0};
// for (int i = 0; i < s.size(); i++)
// {
//     hash[s[i] - 'a']++;
// }
// int q;
// cin >> q;
// while (q--)
// {
//     char c;
//     cin >> c;
//     cout << hash[c - 'a'] << endl;
// }

//     cout << 'b' - 'a' << endl;
// }

// let's say if their is a number which is more than 10^7 than we can use map stl

// as map mai basically kya hota hai ki map store two things keys and values and both are interger

// lets say their is an array = [1,2,3,4,5,6];
// how isko map[arr[i]]++ karke jab loop mai chalayenge so what it will go is vo phele 1 lega and if is not store in the map than vo usko store karke +1 add kar dega ase hi individual elements ko store kakrke values badhata jayega
// and agar humne use koi asa number pucha jo hai hi nhi map mai than it will give 0
// ye benefitial isliye hai because ye phele hi 10^7 memory store nhi karkta what it does is jo bhi value aa rahi hai use hi decalre karke jo changes karna hai vo karega and rest of the number jo nhi hai us map mai will give 0 when asked

// map stores everything in the sorted manner

// how to iterate in a map
// for(auto it : mpp ){
// cout << it.first << it.second << endl; etc etc
// }

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // pre compute
    map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }
    int q;
    cin >> q;
    while (q--)
    {
        int numbers;
        cin >> numbers;

        cout << mpp[numbers] << endl;
    }
}

// is their are n number of elements in a map than the time complexcity for both the keys and the values will be log n
// if we use unordered map that the order will not be defined but but but the time complxicity of unordered map in best or average cases will be bigo of 1 and not log n but in the worst case it will take the time complexity will be bigo of n

// so in this type of question always use unordered map insted of map but if the worst case happens than go to map function

// worst case happens due to internal collisions

// map can have any data type as its key and value but in underordered map their should be the same data type

// their are 3 types of hashing methods
// 1. division method
// 2. folding method
// 3. mid square method