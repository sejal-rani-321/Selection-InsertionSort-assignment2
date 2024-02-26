// Q5. Given an array of strings arr[] with all strings in lowercase. Sort given strings using Bubble Sort
// and display the sorted array.

#include<iostream>
#include<string>
using namespace std;

void bubbleSort(string arr[], int n){
    for (int i = 0; i < n; i++){
        bool swapped = false;
        for (int j = 0; j < n-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }
        if(swapped == false)
        break;
        
    }
    
}

void print(string arr[], int n){
    for (int i = 0; i < n; i++){
        cout << arr[i]<<" ";
    }cout << endl;
}

int main(){
    string arr[] = {"b", "c","a","d"};
    int n = sizeof(arr)/sizeof(arr[0]);

    bubbleSort(arr,n);
    print(arr,n);
    
    return 0;
}