/*Create a vector of floats called vFloat. 
* vFloat should have an iterator. 
*/

//TODO: include the necessary libraries
#include<iostream>
#include<vector>
using namespace std;
int main (){
  //TODO: instantiate vFloat vector
  std::vector<float> vFloat; 
  cout<<"vFloat has "<<vFloat.size()<<" elements\n";

  //TODO: Change the size of vFloat to 10 elements
  vFloat.resize(10);
  cout<<"\n\nvFloat now has "<<vFloat.size()<<" elements\n";
 
  return 0;
}