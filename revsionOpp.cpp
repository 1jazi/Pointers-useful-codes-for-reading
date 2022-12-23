#include <bits/stdc++.h>
using namespace std;
class pointer
{

private:
    int *pointer1;
    char *pointerChar;

public:
    void setPointer1(int *pointer1)
    {
        this->pointer1 = pointer1;
    }
    int *getPointer1()
    {
        return pointer1;
    }
    void setPointerchar(char *pointerChar)
    {
        this->pointerChar = pointerChar;
    }
    char *getChar()
    {
        return pointerChar;
    }
    int getLength(char c[])
    {
        int length = strlen(c);
        return length;
    }
    void printChar(char c[])
    {
        int i = 0;
        while (c[i] != '\0')
        {
            cout << c[i];
            i++;
        }
    }
}

;

int main()
{

    pointer po;
    int value = 5;
    char c[50] = "Jazi";

    po.setPointer1(&value);
    cout << po.getPointer1() << endl;
    //////////////////////////////////////////////////////////////////////////////////////
    po.printChar(c);
    /////////////////////////////////////////////////////
    int array[50][50];

    cout << endl;
    cout << "+-------------+";
    cout << endl;
    return 0;
}
