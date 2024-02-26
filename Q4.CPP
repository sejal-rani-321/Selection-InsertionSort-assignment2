// Q4. Given an array of digits (values are from 0 to 9), the task is to find the minimum possible sum of
// two numbers formed from digits of the array. Please note that all digits of the given array must be
// used to form the two numbers.
 

 #include<iostream>
 using namespace std;

 int bubble(int arr[], int n){
    bool swapped = false;
    for (int i = 0; i <n; i++){
        for (int j = 0; j < n-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }
        if(swapped==false)
        break;
    }

    // arrar into an integers
    int x = 0;
    for (int i = 0; i < n; i++){
        x *= 10;
        x += arr[i];
        //    int digit = (x * 10) + arr[i];
    }
    cout << x << endl;
    
    //  Second minimun num
    for (int i = n-1; i >= 1; i--){
        if(arr[i]!=arr[i-1]){
            swap(arr[i],arr[i-1]);
            break;
        }
    }
    for (int i = 0; i < n; i++){
        cout << arr[i]<< " ";
    }
    cout << endl;
 }

 




 int main(){
    int arr[]= {5,1,5,5,2,3};
    int n = 6;
    // InPUT array
    for (int i = 0; i < n; i++){
        cout << arr[i];
    }
    cout << endl;
    bubble(arr,n);
 }
