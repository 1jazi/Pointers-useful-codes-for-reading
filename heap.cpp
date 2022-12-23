#include <bits/stdc++.h>
using namespace std;
int main()
{

    int a = 9;
    int *p;
    p = (int *)malloc(sizeof(int));
    *p = 10;
    free(p);
    p = (int *)malloc(sizeof(int));
    *p = 30;
    cout << *p << endl;

    int b;
    int *pp;
    pp = new int;
    *pp = 10;
    delete p;
    p = new int[10];
    delete[] p;
    return 0;
}
