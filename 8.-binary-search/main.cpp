#include <iostream>
using namespace std;
//binary search recursive program

void sort(int arr[], int size){
    for (int i=0; i<size; ++i){
        for (int j=size-1; j>i; --j){
            if (arr[j]<arr[j-1]){
                int temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;
            }
        }
    }
}

int binarySearch(int arr[], int l, int r, int x){
    int mid = l + (l+r)/2;
    
    if (l<r){
        if (arr[mid]==x){
            return mid;
        }
        else if (arr[mid]>x){
            return binarySearch(arr, l, mid-1, x);
        }
        else{
            return binarySearch(arr, mid+1, r, x);
        }
    }
    return -1;
}

int main()
{
    int size;
    cout<<"Enter the size of array:";
    cin>>size;
    
    int arr[size];
    cout<<"Enter elements of array:";
    for (int i=0; i<size; ++i){
        cin>>arr[i];
    }
    
    int left = 0;
    int right = size - 1;
    
    int number;
    cout<<"\nEnter the number to search:";
    cin>>number;
    
    sort(arr, size);
    
    int index = binarySearch(arr, left, right, number);
    if (index==-1){
        cout<<"Number not found!";
    }else{
        cout<<"Number found in the array!";
    }

    return 0;
}