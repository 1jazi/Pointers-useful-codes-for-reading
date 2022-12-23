#include<iostream>
using namespace std;
const int MAX = 6;
int main(){
 
  int array[] = {1,2,3,4,5,6};
  int *pArray;
  int counter = 0;
  for(int i = 0;i<sizeof(array)/sizeof(array[0]);i++){
  pArray = &array[i];
  counter ++;
     cout<< "Address of variable number "<< counter<<" : "  <<pArray <<endl;

  }
  //******************************************************//
   int  var[] = {10, 100, 200};
   int i, *ptr[MAX];
 
   for ( i = 0; i < MAX; i++) {
      ptr[i] = &var[i]; /* assign the address of integer. */
   }
   
   for ( i = 0; i < MAX; i++) {
      printf("Value of var[%d] = %d\n", i, *ptr[i] );
   }
 
return 0;
}
