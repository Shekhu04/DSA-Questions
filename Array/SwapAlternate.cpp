#include<iostream>
using namespace std;

void printArray(int arr[],int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }cout << endl;
}

void swapAlternate(int arr[],int size){
    for(int i=0; i < size; i+=2){
        if(i+1 < size){
            swap(arr[i],arr[i+1]);
        }
    }
}
int main(){

    int even[8] = {4,9,0,23,12,54,7,3};
    int odd[5] = {45,76,89,0,1};

    swapAlternate(even,8);
    printArray(even,8);

    cout << endl;

    swapAlternate(odd,5);
    printArray(odd,5);
}
