// Goal: pracitce constructing vectors
// and their iterators
// Call the vector vInts
// Call the iterator it

#include "main.hpp"

int main(){
    vector<int> vInts; 
    vInts.assign(10, 5);
    printVector(vInts);
    assignFunction(vInts, 1);
    pushBackFunction(vInts, 2);
    emplaceFunction(vInts, 1, 3);
    cout<<"\n";
    
    return 0;
}