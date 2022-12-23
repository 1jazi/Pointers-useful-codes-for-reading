#include <iostream>
using namespace std;
int main()
{

  int array[] = {1, 2, 3, 4, 5};
  int size = sizeof(array) / sizeof(int), count = 0;
  int *p;
  for (int i = 0; i < size; i++)
  {
    p = &array[i];
    count++;
    cout << "Address of " << count << " is: " << p << endl;
  }

  return 0;
}
