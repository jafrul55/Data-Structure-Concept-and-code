#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << "Map :" << endl;
    // Sorted Key:
    map<int, int> M;
    M[3] = 9; // 3->key = 9
    M[2] = 3; // 2->key = 9;
    M.insert(make_pair(1, 4));
    cout << "Key"
         << " | "
         << "Value" << endl;
    for (auto i : M)
    {
        cout << i.first << " | " << i.second << endl;
    }

    return 0;
}