#include <iostream>
#include "lib.h"
using namespace std;

int main(){
  int a=0;
  cin>>a;
  bool ris=numeriprimi(a);
  if(ris){
    cout<<"numero primo"<<endl;
  }else{
    cout<<"numero non primo"<<endl;
  }
return 0;
}
