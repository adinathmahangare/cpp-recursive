#include <iostream>
using namespace std;

void merge(int arr[], int left, int right, int mid);

void mergeSort(int arr[], int size, int left, int right){
    if(left<right){
        int mid = left + (right-left)/2;
        mergeSort(arr, mid-left+1, left, mid);
        mergeSort(arr, right-mid, mid+1, right);
        
        merge(arr, left, right, mid);
    }
}

void merge(int arr[], int left, int right, int mid){
    int n1 = mid - left + 1;
    int n2 =  right - mid;
    
    int left_half[n1];
    int right_half[n2];
    
    for (int i=0; i<n1; ++i){
        left_half[i] = arr[left+i];
    }
    for (int j=0; j<n2; ++j){
        right_half[j] = arr[mid+1+j];
    }
    
    int i=0;
    int j=0;
    int k=left;
    
    while(i<n1 && j<n2){
        if (left_half[i]<right_half[j]){
            arr[k] = left_half[i];
            ++i;
        }else{
            arr[k] = right_half[j];
            ++j;
        }
        ++k;
    }
    
    while(i<n1){
        arr[k] = left_half[i];
        ++k;
        ++i;
    }
    
    while(j<n2){
        arr[k] = right_half[j];
        ++k;
        ++j;
    }
}

int main()
{
    int n;
    cout<<"Enter the size of array:";
    cin>>n;
    
    int arr[n];
    cout<<"Enter the elements:";
    for (int i=0; i<n; ++i){
        cin>>arr[i];
    }
    
    cout<<"\nOriginal array:";
    for (int i=0; i<n; ++i){
        cout<<arr[i];
    }
    
    mergeSort(arr, n, 0, n-1);
    
    cout<<"\nSorted array:";
    for (int i=0; i<n; ++i){
        cout<<arr[i];
    }

    return 0;
}