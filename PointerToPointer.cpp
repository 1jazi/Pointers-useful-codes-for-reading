#include<iostream>
using namespace std;
int main(){
 
 int x = 5;
 
 int *p = &x;
 
 int **q = &p;
 
 int ***w = &q;
 
 cout<<"Adddres of x -> "<<p<<endl;
 cout<<"Adddres of p -> "<<**q<<endl;
  cout<<"Adddres of p -> "<<*q<<endl;
  cout<<"Adddres of p -> "<<q<<endl;
 cout<<"Adddres of q -> "<<***w<<endl;

return 0;
}
