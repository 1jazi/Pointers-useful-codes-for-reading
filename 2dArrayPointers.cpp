#include <bits/stdc++.h>
using namespace std;
int main()
{

    int array[2][3] = {{1, 2, 3},
                       {4, 5, 6}};

    int(*p)[3] = array;
    // cout << p << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << p[i] << " ";
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << array[i][j];
        }
        cout << endl;
    }
    return 0;
}