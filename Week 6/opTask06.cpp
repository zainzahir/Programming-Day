#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter the size of array : ";
    cin>>size;

    int arr[size];

    for(int i=0; i<size; i++){
        cout<<"Enter the ELement "<<i+1<<": ";
        cin>>arr[i];
    }
    return 0;
}