#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    cout<<"Enter the number:";
    cin>>n;
    i = 1;
    while(i<=n){
        j = 1;
        while(j<=i){
            cout<<"*";
            j = j + 1;
        }
        cout<<endl;
        i = i + 1;
    }
    return 0;
}