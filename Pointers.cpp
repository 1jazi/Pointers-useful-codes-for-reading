#include<iostream>
using namespace std;

int main(){

 string name = "Jazi";
 string *pName;
 pName = &name;
 cout<< *pName <<endl;
 cout<< pName+1<< endl;

return 0;
}
