#include "lib.h"
bool numeriprimi(int n){
  if(n>2){
    int resto=0, d=2;
    resto=n%d;
    if(resto==0){
      return false;
    }else{
      return numeriprimi(n,d+1);
    }
  }else if(n==2){
    return true;
  }else {
    return false;
  }
}
bool numeriprimi(int n;int d){
  int rest=0;
  if(d<n){
    rest=n%d;
    if(rest!=0){
      return numeriprimi(n,d+1);
    }else{
      return false;
    }
  }else{
    return true;
  }
}
