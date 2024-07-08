//WAP which accepts value of base anf power  from user and disply its value ( base ^power )using UDF,
# include <iostream>
using namespace std; 

// function to calculate power of a number 
double power (double base, int exponent){
    double result = 1.0;
    for ( int i=0; i< exponent; ++i){
        result *= base;
    }
    return result;
}

int main (){
    double base;
    int exponent;

    // input base and power from the user 
    cout << " enter the base:";
    cin >> base ;
    cout <<"enter the exponent: ";
    cin >> exponent;
    
    // calculate and display the result using the power  function 
    cout <<" result : "<< power (base, exponent )<< endl;

    return 0;
}