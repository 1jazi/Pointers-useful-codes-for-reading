#include<iostream>
using namespace std;
int SumArray(int* array,int size){
 int total = 0;
 
  for(int i = 0;i<size;i++){
   total+=array[i];
  }
 return total;
}
int main(){

 int array[] = {1,2,3,4,5},size = sizeof(array)/sizeof(array[0]);
 int sum = SumArray(array,size);
 cout<<sum<<endl;
 
return 0;
}
