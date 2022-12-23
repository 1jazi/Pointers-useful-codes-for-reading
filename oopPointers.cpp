#include <iostream>
using namespace std;
class Pointers
{

private:
  int *pointer1;
  int *pointer2;
  int *pointer3;

public:
  void setPointer1(int *pointer1)
  {
    this->pointer1 = pointer1;
  }
  int *getPointer()
  {
    return pointer1;
  }
  void setPointer2(int *pointer2)
  {
    this->pointer2 = pointer2;
  }
  int *getPointer2()
  {
    return pointer2;
  }
  void setPointer3(int *pointer3)
  {
    this->pointer3 = pointer3;
  }
  int *getPointer3()
  {
    return pointer3;
  }
};

int main()
{
  Pointers pointer;
  int num = 20;
  pointer.setPointer1(&num);
  int *storePointer = pointer.getPointer();
  cout << "Num = " << *storePointer << endl;
  cout << "Addres of variable num : " << storePointer << endl;
}
