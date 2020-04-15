#include "main.hpp"

int main (){
    string temp;
    double FTemp = 0;
    double CTemp = 0;

    cout << "Enter a Farenheit temperature: ";
    getline(cin, temp);
    stringstream(temp) >> FTemp;
    
    CTemp = (FTemp - 32.0) / (9.0 / 5.0);
    cout << "\n" << FTemp << " in Farenheit = " << CTemp << " in Celcius\n";
    return 0;
}