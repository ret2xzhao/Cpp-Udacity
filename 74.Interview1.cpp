#include <iostream>

using namespace std;

int main(){
    unsigned char half_limit = 150;

    for(unsigned char i=0; i<2*half_limit; ++i){
        cout<<i<<"\n";
    }

    return 0;
}