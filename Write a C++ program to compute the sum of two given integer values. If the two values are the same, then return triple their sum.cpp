#include <iostream>
using namespace std ;

int test (int x , int y ){
  return x == y ? (x+y)*3 : (x+y);
}
int main(){
  cout<<test(2,2);
}
