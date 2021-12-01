#include <iostream>
#include "lib.h"
int main() {
    using namespace std;
    int a=0, b=2;
    cin>>a;
    bool ris= numeriprimi(a,b);
    if(ris){
        cout<<"numero primo"<<endl;
    }else{
        cout<<"numero non primo"<<endl;
    }
    return 0;
}
