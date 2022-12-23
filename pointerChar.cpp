#include <iostream>
using namespace std;
void print1(char *c);
void print2(char *c);
void print3(char *c);
void print4(char *c);
int main()
{

  char c[50] = "Jazi";
  print4(c);
  print1(c);
  print2(c);
  print3(c);
  return 0;
}
void print4(char *c)
{
  int i = 0;
  while (c[i] != '\0')
  {
    cout << c[i];
    i++;
  }
}

void print1(char *c)
{
  int i = 0;
  while (c[i] != '\0')
  {
    cout << c[i];
    i++;
  }
  cout << endl;
}
void print2(char *c)
{
  int i = 0;
  while (*(c + i) != '\0')
  {
    cout << c[i];
    i++;
  }
  cout << endl;
}
void print3(char *c)
{

  while (*c != '\0')
  {
    cout << *c;
    c++;
  }
  cout << endl;
}
