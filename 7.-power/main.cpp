#include <iostream>
using namespace std;
//recursive program for calculating power;

double power(double base, int exponent){
    if (exponent==0){
        return 1;
    }
    else if (exponent>0){
        return base*(power(base, exponent-1));
    }else{
        return 1/(base*(power(base, -exponent-1)));
    }
}


int main()
{
    double base;
    cout<<"Enter base:";
    cin>>base;
    
    int exponent;
    cout<<"Enter exponent:";
    cin>>exponent;
    
    double result = power(base, exponent);
    
    cout<<"\nResult:"<<result;

    return 0;
}