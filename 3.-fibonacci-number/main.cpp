#include <iostream>
using namespace std;

int fib(int num){
    if (num<=1){
        return 1;
    }
    else{
        return fib(num-1)+fib(num-2);
    }
}    

int main()
{
    int n;
    cout<<"Enter number:";
    cin>>n;
    
    for (int i=0; i<n; ++i){
        cout<<fib(i)<<endl;
    }

    return 0;
}