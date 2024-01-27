#include <iostream>
using namespace std;
//recursive program for sum of digits

int sumOfdigits(int n){
    if (n<10){
        return n;
    }else{
        return n%10 + sumOfdigits(n/10);
    }
}

int main()
{
    int n;
    cout<<"Enter a number:";
    cin>>n;
    
    int sum = sumOfdigits(n);
    
    cout<<"sum of digits of in number is:"<<sum<<endl;
    return 0;
}