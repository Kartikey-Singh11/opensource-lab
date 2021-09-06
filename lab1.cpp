#include<iostream>
using namespace std;
int findsum(int arr[], int n){
    int summ = 0;
    for(int i = 0;i<n;i++)
    {
        summ += arr[i];
    }
    return summ;
}
int main(){
    int n;
    cout<<"enter the number of elements you want to enter";
    cin>>n;
    cout<<"enter the elements in the array/n";
    int arr[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"sum of all the numbers in the array is : "<<findsum(arr,n);
}
