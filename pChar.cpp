#include<iostream>
using namespace std;
void print(char* c);
int main(){

 char c[5] = "jazi"; 
 
 //char *p = c;
 
  print(c);
 
 //cout<<p[1]<<endl;

return 0;
}
void print(char* c){
 
 int i = 0;
 
 while(c[i]!='\0'){
  cout<<c[i];
  i++;
 }
 cout<<endl;

}
