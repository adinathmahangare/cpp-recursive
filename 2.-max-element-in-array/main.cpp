#include <iostream>
using namespace std;

int maximum(int arr[], int size){
    int max = arr[0];
    
    if (size == 1){
        return max;
    }
    
    max = maximum(arr + 1, size - 1);
    return (max<arr[0]) ? arr[0] : max;             // condition ? expression_if_true : exprssion_if_false;
}

int main()
{
    int n;
    cout<<"Enter size:";
    cin>>n;
    
    int arr[n];
    cout<<"Enter elements:";
    for (int i = 0; i<n; ++i){
        cin>>arr[i];
    }
    
    int maxElement = maximum(arr, n);
    cout<<"Maximum of the array is:"<<maxElement;

    return 0;
}