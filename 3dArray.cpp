#include <bits/stdc++.h>
using namespace std;
int main()
{

    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.pop();

    while (!s.empty())
    {
        cout << s.top()
             << endl;
        s.pop();
    }
    int array[3][2][2] = {{{2, 5}, {7, 9}},
                          {{3, 4}, {6, 1}},
                          {{0, 8}, {11, 13}}};
    cout << array << " " << *array << " " << array[0] << " " << &array[0][0];

    return 0;
}