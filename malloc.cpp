#include <bits/stdc++.h>
using namespace std;
int main()
{
    int *p = (int *)malloc(sizeof(int));
    void *pp = malloc(sizeof(char));
    int x = 1025;
    int *px = &x;
    printf("%d\n%d\n", px, *px);
    printf("%d\n", p);
    printf("%d\n", pp);
    cout << px << endl;
    return 0;
}