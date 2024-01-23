#include <iostream>
using namespace std;

void bubbleSort(int arr[], int size){
    if (size <= 1) {
        return;
    }
    
    for (int i=0; i<size-1; ++i){
        if (arr[i]>arr[i+1]){
            int temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
    }
    
    bubbleSort(arr, size-1);
}

int main()
{
    int n;
    cout<<"Enter size:";
    cin>>n;
    
    cout<<"Enter elements:";
    int arr[n];
    for (int i=0; i<n; ++i){
        cin>>arr[i];
    }
    
    bubbleSort(arr,n);
    
    cout<<"Sorted array:";
    for (int i=0; i<n; ++i){
        cout<<arr[i]<<" ";
    }

    return 0;
}